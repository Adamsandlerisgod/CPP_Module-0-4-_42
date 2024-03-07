#include "Floor.hpp"
// Default constructor
Floor::Floor() {
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Floor::Floor(const Floor& other) {
	std::cout << "Copy consrtuctor called" << std::endl;
    // Implementation here
}
// Copy assignment operator
Floor& Floor::operator=(const Floor& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
        // Implementation here
    }
    return *this;
}
// Destructor
Floor::~Floor() {
	std::cout << "Destructor called" << std::endl;
}
