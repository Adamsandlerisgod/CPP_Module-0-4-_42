#include "Ice.hpp"
// Default constructor
Ice::Ice() {
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Ice::Ice(const Ice& other) {
	std::cout << "Copy consrtuctor called" << std::endl;
    // Implementation here
}
// Copy assignment operator
Ice& Ice::operator=(const Ice& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
        // Implementation here
    }
    return *this;
}
// Destructor
Ice::~Ice() {
	std::cout << "Destructor called" << std::endl;
}
