#include "Cure.hpp"
// Default constructor
Cure::Cure() {
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Cure::Cure(const Cure& other) {
	std::cout << "Copy consrtuctor called" << std::endl;
    // Implementation here
}
// Copy assignment operator
Cure& Cure::operator=(const Cure& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
        // Implementation here
    }
    return *this;
}
// Destructor
Cure::~Cure() {
	std::cout << "Destructor called" << std::endl;
}
