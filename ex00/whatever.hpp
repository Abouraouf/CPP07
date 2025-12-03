#pragma once
#include <iostream>

//what is a template
//what is the type of parameters that it takes
//what ia the ::
//where are they stored
template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T& a, T& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;
}
