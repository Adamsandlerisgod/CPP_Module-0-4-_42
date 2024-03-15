#include "Bureaucrat.hpp"
// Default constructor
Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	std::cout << "Copy consrtuctor called" << std::endl;
    // Implementation here
}
// Copy assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
        // Implementation here
    }
    return *this;
}
// Destructor
Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}
