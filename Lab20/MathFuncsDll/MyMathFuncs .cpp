#include "pch.h"
#include "MathFuncsDll.h"
#include <stdexcept>

using namespace std;

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		if (b == 0)
			throw invalid_argument("���������� b �������");
		
		return a / b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return 2 * a * b;;
	}
	
	double MyMathFuncs::Pow(double a, double b)
	{
		return a * a + b * b;
	}
}