#include "AMateria.hpp"
// Default constructor
AMateria::AMateria() {
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
AMateria::AMateria(const AMateria& other) {
	std::cout << "Copy consrtuctor called" << std::endl;
    // Implementation here
}
// Copy assignment operator
AMateria& AMateria::operator=(const AMateria& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
        // Implementation here
    }
    return *this;
}
// Destructor
AMateria::~AMateria() {
	std::cout << "Destructor called" << std::endl;
}
