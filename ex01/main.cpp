#include "iter.hpp"
#include <iostream>

void inc(int& x) { x++; }
void print(const int& x) { std::cout << x << ' '; }

int main()
{
    int hass[4] = {1, 3, 2, 8};
	
	std::cout << "before : " << std::endl;
	::iter(hass, 4, print);
	std::cout << std::endl;
	::iter(hass, 4, inc);
	std::cout << "after : " << std::endl;
	::iter(hass, 4, print);
	std::cout << std::endl;
}