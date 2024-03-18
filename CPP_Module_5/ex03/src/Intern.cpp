#include "../includes/Intern.hpp"
// Default constructor
Intern::Intern() {
	std::cout << "Default Intern constructor called" << std::endl;
}
// Copy constructor
Intern::Intern(const Intern& other) {
	std::cout << "Intern Copy consrtuctor called" << std::endl;
	*this = other;
}
// Copy assignment operator
Intern& Intern::operator=(const Intern& other) {
	std::cout << "Intern Copy Assignment operator called" << std::endl;
	(void)other;
    return *this;
}
// Destructor
Intern::~Intern() {
	std::cout << "Destructor called" << std::endl;
}

AForm*	Intern::makeForm(const std::string &formName, const std::string &target){
	const char *formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm *forms[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (forms[i]);
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return (NULL);
}

