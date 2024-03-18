#include "../includes/RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45) {
	std::cout << "Default Robotomy constructor called" << std::endl;
	setTarget("default target");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45) {
	std::cout << "Targeted Robotomy constructor called" << std::endl;
	setTarget(target);
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :\
	AForm("RobotomyRequest", 72, 45)  {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
// Copy assignment operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
		setName(other.getName());
		setGradetoSign(72);
		setGradetoExec(45);
		setSignedStatus(0);
		setTarget(other.getTarget());
    }
    return *this;
}
// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	
	srand(time(NULL));

	if (executor.getGrade() <= this->getGradetoExec() && this->getSignedstatus() == true){
		std::cout << "Drilling Noises: *Wzzzzzzzzzzzzzzz Brah brah brah Skibidi Pop*" << std::endl;
		if ((rand()) % 2 == 1)
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->getTarget() << " has not been robotomized as it is only successful" <<
			" 50 percent of the time" << std::endl;
	}
	else if (executor.getGrade() <= this->getGradetoExec() && this->getSignedstatus() == false)
		std::cout << "Grade requirements are met, but " << this->getName() << " is unsigned." << std::endl;
	else if (executor.getGrade() > this->getGradetoExec())
		throw GradeTooLowException();
	else if (executor.getGrade() < 1)
		throw GradeTooHighException();

}
