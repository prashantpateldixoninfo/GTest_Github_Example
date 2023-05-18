#include<iostream>

namespace CalculatorNamespece
{
    enum MyResult
    {
	OK = 1,
	ERROR = -1
    };

    int add(int _first, int _second);
    int sub(int _first, int _second);
    int multi(int _first, int _second);
    float div(int _first, int _second);
}
