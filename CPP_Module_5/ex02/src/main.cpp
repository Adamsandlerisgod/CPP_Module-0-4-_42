#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
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

// int main()
// {
// try {
// 		// Bureaucrat z = Bureaucrat("Z", -1); // overflow
// 		Bureaucrat a = Bureaucrat("A", 1);
// 		Bureaucrat b = Bureaucrat("B", 150);
// 		std::cout << a << std::endl;
// 		std::cout << b << std::endl;
// 		std::cout << a << std::endl;
// 		std::cout << b << std::endl;
// 		// a.increaseGrade(5);
// 		// a.increaseGrade(5);
// 		// a.increaseGrade(6);
// 		AForm	marriage = AForm("Marriage AForm", 20, 40);
// 		AForm	divorce = AForm(marriage);
// 		a.signForm(marriage);
// 		marriage.beSigned(a);
// 		a.signForm(marriage);
// 		std::cout << marriage.getGradetoExec() << std::endl;
// 		std::cout << marriage << std::endl;

		
// 	} catch (std::exception & e) {
// 		std::cout << e.what()  << std::endl;
// 	}
// }

int	main()
{
	try {
		Bureaucrat a = Bureaucrat("James McAvoy", 71);
		Bureaucrat b = Bureaucrat("Lebron James", 150);
		PresidentialPardonForm fb; //change middle value to 0 to see error
		RobotomyRequestForm fa("Carmelo");
		ShrubberyCreationForm fc("Alejandro");
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << fa << std::endl;
		std::cout << fb << std::endl;
		std::cout << fc << std::endl;
		fa.beSigned(a); // change to b to see error
		fb.beSigned(a); // change to b to see error
		fc.beSigned(a); // change to b to see error
		std::cout << fa << std::endl;
		std::cout << fb << std::endl;
		std::cout << fc << std::endl;
		fa.execute(a);
		fb.execute(a);
		fc.execute(a);
		// b.signForm(fb);
		// std::cout << fb << std::endl;
		// fa.execute(b);
	} catch (std::exception & e) {
		std::cout << e.what()  << std::endl;
	}
	return (0);
}