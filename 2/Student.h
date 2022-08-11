
#pragma once
#include <iostream>

class Student
{
	std::string mName;
	int mScore;

public:
	Student(std::string name, int score) : mName{ name }, mScore{ score }
	{
	}
	~Student()
	{
	}

	void Print()
	{
		std::cout << mName << " - " << mScore << "Á¡" << std::endl;
	}
};
