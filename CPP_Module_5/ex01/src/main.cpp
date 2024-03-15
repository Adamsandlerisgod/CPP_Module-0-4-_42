#include "../includes/Bureaucrat.hpp"

// int main()
// {
// 	Bureaucrat* Charlize = new Bureaucrat("Charlize", 140);
// 	std::cout << Charlize->getName() << std::endl;
// 	std::cout << Charlize->getGrade() << std::endl;
// 	Bureaucrat* Frazier = new Bureaucrat(*Charlize);
// 	Frazier->setGrade(150);
// 	std::cout << Frazier->getName() << std::endl;
// 	std::cout << Frazier->getGrade() << std::endl;
// 	Frazier->decreaseGrade(5);
// 	std::cout << Frazier->getGrade() << std::endl;

// 	delete Charlize;
// 	delete Frazier;
// 	return 0;
// }

int main()
{
try {
		// Bureaucrat z = Bureaucrat("Z", -1); // overflow
		Bureaucrat a = Bureaucrat("A", 1);
		Bureaucrat b = Bureaucrat("B", 151);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		// a.increaseGrade(5);
		// a.increaseGrade(5);
		// a.increaseGrade(6);
		
	} catch (std::exception & e) {
		std::cout << e.what()  << std::endl;
	}
}