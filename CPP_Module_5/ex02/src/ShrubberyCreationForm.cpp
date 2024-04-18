#include "../includes/ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137) {
	std::cout << "Default Shrubbery constructor called" << std::endl;
	setTarget("Default Target");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137) {
	std::cout << "Targeted Shrubbery constructor called" << std::endl;
	setTarget(target);
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :\
	AForm("ShrubberyCreation", 145, 137)  {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
// Copy assignment operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
		setName(other.getName());
		setGradetoSign(145);
		setGradetoExec(137);
		setSignedStatus(0);
		setTarget(other.getTarget());

    }
    return *this;
}
// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() <= this->getGradetoExec() && this->getSignedstatus() == true)
	{
		std::string fileName = this->getTarget() + "_shrubbery";
		std::ofstream ofs(fileName.c_str());
		if (ofs.is_open()){
		ofs << 	   "       _-_\n"
                   "    /~~   ~~\\\n"
                   " /~~         ~~\\\n"
                   "{               }\n"
                   " \\  _-     -_  /\n"
                   "   ~   \\ //  ~\n"
                   "_- -   | | _- _\n"
                   "  _ -  | |   -_\n"
                   "      // \\";
		ofs.close();
		std::cout << "Shrubbery successfully created in file : " << fileName << std::endl; 
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		}
		else
			std::cout << "Failed to Create File: " << fileName << std::endl;
	}
	if (executor.getGrade() <= this->getGradetoExec() && this->getSignedstatus() == false)
		std::cout << "Grade requirements are met, but " << this->getName() << " is unsigned." << std::endl;
	else if (executor.getGrade() > this->getGradetoExec())
		throw GradeTooLowException();
	else if (executor.getGrade() < 1)
		throw GradeTooHighException();

	
}
