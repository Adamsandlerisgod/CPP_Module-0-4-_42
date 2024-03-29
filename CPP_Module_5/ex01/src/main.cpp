#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

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
// 		Form	marriage = Form("Marriage Form", 20, 40);
// 		Form	divorce = Form(marriage);
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
		Bureaucrat a = Bureaucrat("A", 1);
		Bureaucrat b = Bureaucrat("B", 150);
		Form fa = Form("FormA", 1, 150); //change middle value to 0 to see error
		Form fb = Form("FormB", 150, 1);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << fa << std::endl;
		fa.beSigned(a); // change to b to see error
		std::cout << fa << std::endl;
		b.signForm(fb);
		std::cout << fb << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what()  << std::endl;
	}
	return (0);
}