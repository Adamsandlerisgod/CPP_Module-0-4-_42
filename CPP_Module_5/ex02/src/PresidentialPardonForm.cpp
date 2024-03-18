#include "../includes/PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5) {
	std::cout << "Default Presidential constructor called" << std::endl;
	setTarget("Default Target");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5) {
	std::cout << "Targeted Presidential constructor called" << std::endl;
	setTarget(target);
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :\
	AForm("PresidentialPardon", 25, 5)  {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
// Copy assignment operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
		setName(other.getName());
		setGradetoSign(25);
		setGradetoExec(5);
		setSignedStatus(0);
		setTarget(other.getTarget());

    }
    return *this;
}
// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() <= this->getGradetoExec() && this->getSignedstatus() == true)
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	if (executor.getGrade() <= this->getGradetoExec() && this->getSignedstatus() == false)
		std::cout << "Grade requirements are met, but " << this->getName() << " is unsigned." << std::endl;
	else if (executor.getGrade() > this->getGradetoExec())
		throw GradeTooLowException();
	else if (executor.getGrade() < 1)
		throw GradeTooHighException();

	
}
