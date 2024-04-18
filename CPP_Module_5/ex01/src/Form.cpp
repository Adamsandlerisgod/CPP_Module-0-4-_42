#include "../includes/Form.hpp"

// Default constructor
Form::Form() : _formName("default"), _signed(false), _gradeToSign(1), _gradeToExec(1){
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(const std::string formName, unsigned int gradeSign, unsigned int gradeExec): \
	_formName(formName), _signed(false), _gradeToSign(0), _gradeToExec(0){
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	std::cout << "Form constructor called" << std::endl;
	setGradetoSign(gradeSign);
	setGradetoExec(gradeExec);
}
// Copy constructor
Form::Form(const Form& other) :
 _formName(other.getName()), _signed(false), \
 	_gradeToSign(other.getGradetoSign()), _gradeToExec(other.getGradetoExec()) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
// Copy assignment operator
Form& Form::operator=(const Form& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
		setName(other.getName());
		setGradetoSign(other.getGradetoSign());
		setGradetoExec(other.getGradetoExec());
		setSignedStatus(false);
    }
    return *this;
}
// Destructor
Form::~Form() {
	std::cout << "Destructor called" << std::endl;
}

std::string	Form::getName() const{
	return (this->_formName);
}

unsigned int	Form::getGradetoSign() const{
	return (this->_gradeToSign);
}

unsigned int	Form::getGradetoExec() const{
	return(this->_gradeToExec);
}

bool	Form::getSignedstatus() const{
	return(this->_signed);
}

void	Form::setName(const std::string& name){
	const_cast<std::string &>(this->_formName) = name;
}
void	Form::setGradetoSign(const unsigned int grade){
	const_cast<unsigned int&>(this->_gradeToSign) = grade;
}
void	Form::setGradetoExec(const unsigned int grade){
	const_cast<unsigned int&>(this->_gradeToExec) = grade;
}
void	Form::setSignedStatus(const bool signed_status){
	const_cast<bool&>(this->_signed) = signed_status;
}

void	Form::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() < 1)
		throw GradeTooHighException();
	if (bureaucrat.getGrade() > this->getGradetoSign())
		throw GradeTooLowException();
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		setSignedStatus(true);
	
}

std::ostream &	operator<<( std::ostream & o, Form const & other)
{
	o << other.getName() << " is ";
	if (other.getSignedstatus())
		o << "signed";
	else
		o << "unsigned";
	o << " and requires a grade of " << other.getGradetoSign() << " to sign and a grade of " \
		<< other.getGradetoExec() << " to execute." << std::endl;
	return (o);
}