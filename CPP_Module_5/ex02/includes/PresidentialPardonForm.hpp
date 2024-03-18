#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		// Default constructor
		PresidentialPardonForm();
		// Targeted Constructor
		PresidentialPardonForm(std::string target);
		// Copy constructor
    PresidentialPardonForm(const PresidentialPardonForm& other);
		// Copy assignment operator
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		// Destructor
		~PresidentialPardonForm();

		virtual void	execute(Bureaucrat const & executor) const;

	};
#endif // PresidentialPardonForm_HPP
