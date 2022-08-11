#include "Date.h"
#include <iostream>

int main()
{
	int day, month, year;

	std::cout << "ÀÏ : ";
	std::cin >> day;
	std::cout << "¿ù : ";
	std::cin >> month;
	std::cout << "³â: ";
	std::cin >> year;

	Date d1(day, month, year);

	d1.Print();
}