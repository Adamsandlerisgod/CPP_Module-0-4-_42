#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
#include <iostream>
#include <stdlib.h>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		// Default constructor
		RobotomyRequestForm();
		// Targeted Constructor
		RobotomyRequestForm(std::string target);
		// Copy constructor
    RobotomyRequestForm(const RobotomyRequestForm& other);
		// Copy assignment operator
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		// Destructor
		~RobotomyRequestForm();

		virtual void	execute(Bureaucrat const & executor) const;

	};
#endif // RobotomyRequestForm_HPP
