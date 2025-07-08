#pragma once

template <typename Type>
void	iter(Type* arr, int len, void (*funcPtr)(Type&))
{
	for (int i = 0; i < len; i++)
		funcPtr(arr[i]);
}
