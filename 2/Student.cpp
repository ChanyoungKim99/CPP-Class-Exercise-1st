#include "Student.h"

int main()
{
	std::string name;
	int score;

	std::cout << "�̸� : " << std::endl;
	std::cin >> name;
	std::cout << "���� : " << std::endl;
	std::cin >> score;

	Student s1(name, score);

	s1.Print();
}