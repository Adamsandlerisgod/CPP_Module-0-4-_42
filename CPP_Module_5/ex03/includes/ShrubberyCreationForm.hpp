#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		// Default constructor
		ShrubberyCreationForm();
		// Targeted Constructor
		ShrubberyCreationForm(std::string target);
		// Copy constructor
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		// Copy assignment operator
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		// Destructor
		~ShrubberyCreationForm();

		virtual void	execute(Bureaucrat const & executor) const;

	};
#endif // ShrubberyCreationForm_HPP
