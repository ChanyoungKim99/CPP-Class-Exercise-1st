#include "Student.h"

int main()
{
	std::string name;
	int score;

	std::cout << "이름 : " << std::endl;
	std::cin >> name;
	std::cout << "점수 : " << std::endl;
	std::cin >> score;

	Student s1(name, score);

	s1.Print();
}