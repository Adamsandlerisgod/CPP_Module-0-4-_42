#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

// int main() {
//     try {
//         Bureaucrat president = Bureaucrat("President", 1);
//         Bureaucrat badGuy = Bureaucrat("Bad", 100);
//         Bureaucrat catLady = Bureaucrat("Cat", 150);
        
//         AForm* presidentialPardonForm = new PresidentialPardonForm("Presidential Pardon");    // required grade 25
//         AForm* robotomyRequestForm = new RobotomyRequestForm("Robotomy Request");              // required grade 72
//         AForm* shrubberyCreationForm = new ShrubberyCreationForm("Shrubbery Creation");        // required grade 145
        
//         presidentialPardonForm->execute(president);
//         robotomyRequestForm->execute(president);
//         shrubberyCreationForm->execute(president);
        
//         delete presidentialPardonForm;
//         delete robotomyRequestForm;
//         delete shrubberyCreationForm;
//     } catch (std::exception &e) {
//         std::cout << e.what() << std::endl;
//     }

//     return 0;
// }

int main() {
        try{

		Intern intern;
        AForm* robotomyRequestForm;
		// AForm Form = AForm();
        AForm* shrubberyCreationForm;
		Bureaucrat president = Bureaucrat("Obama", 1);

        
        robotomyRequestForm = intern.makeForm("robotomy request", "Bender");
        shrubberyCreationForm = intern.makeForm("shrubbery creation", "Scrub");
        
        std::cout << *robotomyRequestForm << std::endl;
        std::cout << *shrubberyCreationForm << std::endl;
        president.signForm(*robotomyRequestForm);

        delete shrubberyCreationForm;
        delete robotomyRequestForm;
		} catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}
