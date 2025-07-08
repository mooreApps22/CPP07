#include <iostream>
#include <string>
#include "whatever.hpp"

void	outputIntValue(int& x)
{
	std::cout << x << std::endl;
}

void	outputFloatValue(float& x)
{
	std::cout << x << std::endl;
}

void	outputStringValue(std::string& x)
{
	std::cout << x << std::endl;
}

int main(void)
{
	int nums1[] = {1, 2, 3, 4};
	float nums2[] = {11.1, 22.2, 33.3, 44.4};
	std::string strs1[] =  {"abc", "def", "ghi", "jkl"};
	iter(nums1, 4, outputIntValue);
	iter(nums2, 4, outputFloatValue);
	iter(strs1, 4, outputStringValue);
	return 0;
}
