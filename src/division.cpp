#include <calculator.h>

namespace CalculatorNamespece
{
    float div(int _first, int _second)
    {
	try
	{
	    if(_second)
	    {
	    	return (float)_first / (float)_second;
	    }
	    else
	    {
		throw(_second);
	    }
	}
	catch(int num)
	{
	    std::cerr << "Unable to divide the number by " << num << std::endl;
	    return MyResult::ERROR;
	}
    }
}
