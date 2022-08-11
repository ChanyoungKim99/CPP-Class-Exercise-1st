#pragma once
#include <iostream>

class Date
{
	int mDay;
	int mMonth;
	int mYear;

public:
	Date(int day, int month, int year) : mDay{ day }, mMonth{ month }, mYear{ year }
	{
	};

	~Date()
	{
	};

	void Print()
	{
		std::cout << mYear << " - " << mDay << " - " << mMonth << std::endl;
	}

};

