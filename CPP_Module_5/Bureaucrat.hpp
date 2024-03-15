#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
#include <iostream>

class Bureaucrat {
	public:
		// Default constructor
		Bureaucrat();
		// Copy constructor
    Bureaucrat(const Bureaucrat& other);
		// Copy assignment operator
		Bureaucrat& operator=(const Bureaucrat& other);
		// Destructor
		~Bureaucrat();
};
#endif // Bureaucrat_HPP
