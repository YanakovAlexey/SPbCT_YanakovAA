#include <stdio. h>
#include <stdlib. h>
#include <unistd. h>
#include <errno.h>
#include <sys/types. h>
#include <sys / wait. h>

int main()
{
	int x = 2, pid;

	cout << "��������� �������, x=" << x << endl << endl;
	FILE* File;
	File = fopen("myfile.txt", "w");
	PID = fork();
	x++;
	cout << "����� x=" << x << endl << endl;

	if (pid == 0) 
	{
		cout << "�������1 x=" << x << endl;
		x -= 3;
		cout << "�������2 x=" << x << endl;
	}
	else if(pid > 0)
	{ 
		cout << "��������1, x=" << x << " " << pid << endl;
		x += 2;
		cout << "��������2, x=" << x << endl;
		sleep(5);
		x = wait(&pid);
	}
	else 
	{
		cout << "error fork";
		return - 1;
	}

	return 0;
}