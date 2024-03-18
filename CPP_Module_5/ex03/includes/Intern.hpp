#ifndef Intern_HPP
# define Intern_HPP
#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <sstream> // For stringstream
#include <functional>


class AForm;

class Intern {
	public:
		// Default constructor
		Intern();
		// Copy constructor
    Intern(const Intern& other);
		// Copy assignment operator
		Intern& operator=(const Intern& other);
		// Destructor
		~Intern();
		AForm*	makeForm(const std::string &formName, const std::string &target);
};
#endif // Intern_HPP
