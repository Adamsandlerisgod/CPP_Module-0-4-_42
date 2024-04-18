#include "../includes/Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a = Bureaucrat("Barrack", 1);
		Bureaucrat b = Bureaucrat("Richard", 150);
		// Bureaucrat b = Bureaucrat(a);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.increaseGrade();
		b.decreaseGrade();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		
	} catch (std::exception & e) {
		std::cout << e.what()  << std::endl;
	}
	return 0;
}