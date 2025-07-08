#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	Array<long>	a(5);

	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = i * 10;
	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << a[i] << std::endl;

	try
	{
		std::cout << a[100] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	return 0;
}
