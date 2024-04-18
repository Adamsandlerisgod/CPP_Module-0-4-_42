#include "../includes/AForm.hpp"

// Default constructor
AForm::AForm() : _formName("default"), _signed(false), _gradeToSign(1), _gradeToExec(1){
	std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(const std::string formName, unsigned int gradeSign, unsigned int gradeExec): \
	_formName(formName), _signed(false), _gradeToSign(0), _gradeToExec(0){
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	std::cout << "AForm constructor called" << std::endl;
	setGradetoSign(gradeSign);
	setGradetoExec(gradeExec);
}
// Copy constructor
AForm::AForm(const AForm& other) :
 _formName(other.getName()), _signed(false), \
 	_gradeToSign(other.getGradetoSign()), _gradeToExec(other.getGradetoExec()) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
// Copy assignment operator
AForm& AForm::operator=(const AForm& other) {
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
AForm::~AForm() {
	std::cout << "Destructor called" << std::endl;
}

std::string	AForm::getName() const{
	return (this->_formName);
}

unsigned int	AForm::getGradetoSign() const{
	return (this->_gradeToSign);
}

unsigned int	AForm::getGradetoExec() const{
	return(this->_gradeToExec);
}

bool	AForm::getSignedstatus() const{
	return(this->_signed);
}

std::string AForm::getTarget() const{
	return(this->_target);
}

void	AForm::setTarget(const std::string& target) const{
	const_cast<std::string &>(this->_target) = target;
}


void	AForm::setName(const std::string& name){
	const_cast<std::string &>(this->_formName) = name;
}
void	AForm::setGradetoSign(const unsigned int grade){
	const_cast<unsigned int&>(this->_gradeToSign) = grade;

}
void	AForm::setGradetoExec(const unsigned int grade){
	const_cast<unsigned int&>(this->_gradeToExec) = grade;
}
void	AForm::setSignedStatus(const bool signed_status){
	const_cast<bool&>(this->_signed) = signed_status;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() < 1)
		throw GradeTooHighException();
	if (bureaucrat.getGrade() > 150)
		throw GradeTooLowException();
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		setSignedStatus(true);
}

std::ostream &	operator<<( std::ostream & o, AForm const & other)
{
	o << "Form " << other.getName() << " is ";
	if (other.getSignedstatus())
		o << "signed";
	else
		o << "unsigned";
	o << " and requires a grade of " << other.getGradetoSign() << " to sign and a grade of " \
		<< other.getGradetoExec() << " to execute." << std::endl;
	return (o);
}