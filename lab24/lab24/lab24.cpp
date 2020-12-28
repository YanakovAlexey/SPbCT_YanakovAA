#include <iostream>
#include <windows.h>

using namespace std;

HANDLE Mutx;
HANDLE ArrayEvents[4], EventEnded;

DWORD WINAPI Employee(LPVOID lpParam) {

	char input;

	if (WaitForSingleObject(Mutx, INFINITE) != 0) 
	{
		cout << "Не удалось занять мьютекс" << endl;
		return 1;
	}
	if (WaitForSingleObject(EventEnded, 10) == WAIT_TIMEOUT) 
	{
		cout << "Сообщение 0 или 1, или 2, или 3: "; cin >> input;
		cout << endl;

		if (cin.fail() || (input < '0' || input>'3')) 
		{
			cout << "Неправильные данные" << endl;
			cout << endl;
		}
		else if (SetEvent(ArrayEvents[(unsigned int)(input - '0')]) == 0) 
		{
			cout << "Удалось установить событие" << endl;
			cout << endl;
		}
			
		ReleaseMutex(Mutx);

		return 0;
	}
	else 
	{
		ReleaseMutex(Mutx);

		return 1;
	}
}

void main() {

	setlocale(LC_ALL, ".1251");
	unsigned int n;

	cout << "Количество потоков для запуска: ";	cin >> n;
	cout << endl;

	if (cin.fail()) 
	{
		cout << "Неправильные данные" << endl;
		cout << endl;
		ExitProcess(1);
	}

	cout << "Будет создано потоков: " << n << endl;
	cout << endl;

	for (unsigned int i = 0; i < 4; i++) {
		if ((ArrayEvents[i] = CreateEventA(0, 0, 0, 0)) == 0) 
		{
			cout << "Не удалось создать событие \"" << i << "\"" << endl;
			cout << endl;
			ExitProcess(1);
		}
	}
		
	if ((EventEnded = CreateEventA(0, 1, 0, 0)) == 0) 
	{
		cout << "Не удалось создать событие" << endl;
		ExitProcess(1);
	}

	Mutx = CreateMutexA(0, 1, 0);
	HANDLE* Threads = new HANDLE[n];

	for (unsigned int i = 0; i < n; i++) 
	{
		if ((Threads[i] = CreateThread(0, 0, Employee, 0, 0, 0)) == 0) 
		{
			cout << "Не удалось создать поток №" << i + 1 << endl;
			ExitProcess(1);
		}
	}
		
	cout << "Создано потоков: " << n << endl;
	ReleaseMutex(Mutx);

	for (unsigned int i = 0; i < 3; i++) 
	{
		WaitForMultipleObjects(4, ArrayEvents, 0, INFINITE);
		cout << "Принято сообщение №" << i + 1 << endl;
	}

	SetEvent(EventEnded);
	WaitForSingleObject(Mutx, INFINITE);
	ResetEvent(EventEnded);

	cout << "Программа завершена" << endl;

	delete[] Threads;

	ExitProcess(0);
}

