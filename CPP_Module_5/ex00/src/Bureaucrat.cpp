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

int	Bureaucrat::getGrade() const {
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

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return (o);
}