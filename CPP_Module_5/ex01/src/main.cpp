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

int main()
{
try {
		// Bureaucrat z = Bureaucrat("Z", -1); // overflow
		Bureaucrat a = Bureaucrat("A", 4);
		Bureaucrat b = Bureaucrat("B", 150);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.increaseGrade();
		a.increaseGrade();
		a.increaseGrade();
		Form	marriage = Form("Marriage Papers", 20, 40);
		Form	divorce = Form(marriage);
		b.signForm(marriage);
		a.signForm(marriage);
		std::cout << marriage.getGradetoExec() << std::endl;
		std::cout << marriage << std::endl;

		
	} catch (std::exception & e) {
		std::cout << e.what()  << std::endl;
	}
}

// int	main()
// {
// 	try {
// 		Bureaucrat a = Bureaucrat("Obama", 1);
// 		Bureaucrat b = Bureaucrat("Hamilton", 148);
// 		Form fa = Form("Declaration of Independence", 1, 145); ///change middle value to 0 to see error
// 		Form fb = Form("Divorce Papers", 150, 1);
// 		std::cout << a << std::endl;
// 		std::cout << b << std::endl;
// 		std::cout << fa << std::endl;
// 		a.signForm(fb); 
// 		std::cout << fa << std::endl;
// 		b.signForm(fb);
// 		std::cout << fb << std::endl;
// 	} catch (std::exception & e) {
// 		std::cout << e.what()  << std::endl;
// 	}
// 	return (0);
// }