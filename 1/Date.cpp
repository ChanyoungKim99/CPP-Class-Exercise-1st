#include "Date.h"
#include <iostream>

int main()
{
	int day, month, year;

	std::cout << "�� : ";
	std::cin >> day;
	std::cout << "�� : ";
	std::cin >> month;
	std::cout << "��: ";
	std::cin >> year;

	Date d1(day, month, year);

	d1.Print();
}