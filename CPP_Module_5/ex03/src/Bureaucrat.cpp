#include "../includes/Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat(){
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	setGrade(grade);
	std::cout << _name << " has been spawned" << std::endl;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
// Copy assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
		setName(other.getName());
		setGrade(other.getGrade());
    }
    return *this;
}
// Destructor
Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

void	Bureaucrat::setName(const std::string& name){
    const_cast<std::string&>(this->_name) = name;
}

unsigned int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::increaseGrade(){
	setGrade(_grade - 1);
}

void Bureaucrat::decreaseGrade(){
	setGrade(_grade + 1);
}

void	Bureaucrat::setGrade(const int grade){
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

void	Bureaucrat::signForm(AForm &form){
	form.beSigned(*this);
	if (form.getSignedstatus() == true)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else{
		std::string reason;
		if (this->getGrade() > form.getGradetoSign())
			reason = " because his grade was too low";
		else if (this->getGrade() < 1)
			reason = " because his grade was too high/invalid";
		std::cout << this->_name << " couldn't sign " << form.getName() << reason << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form){
	if (form.getSignedstatus() == true)
		form.execute(*this);
	else
		std::cout << form.getName() << " is unsigned, therefore cannot execute" << std::endl;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return (o);
}

