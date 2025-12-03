#pragma once

template<typename T_array, typename T_func>
void iter(T_array *array, int l, T_func func)
{
	for (int i = 0; i < l; i++)
	{
		func(array[i]);
	}
}
