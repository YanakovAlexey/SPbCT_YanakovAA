
#include <iostream>
#include "../MathFuncsDll/MathFuncsDll.h"
#include<math.h>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");

	double a, f, b, c, p, s;
	double P = 3.14159;

	cout << "Сторона a  = " << endl; cin >> a;
	cout << "Сторона b = " << endl; cin >> b;
	cout << "Угол f = " << endl; cin >> f ;
		
	if ((f >= 180) || (f <= 0))
	{
		cout << "Неверный угол";
	}
	else
	{
		c = sqrt(MathFuncs::MyMathFuncs::Pow(a, b)  -  MathFuncs::MyMathFuncs::Multiply(a, b) * cos(P * f / 180));
		cout<<"Сторона с= "<< c <<endl;

		p = MathFuncs::MyMathFuncs::Add(a, b) + c;
		cout << "Периметр = " << p<<endl;

		p = p / 2;
		cout << "Полупериметр = " << p << endl;

		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Площадь = " << s << endl << endl;
	}
	return 0;
}
