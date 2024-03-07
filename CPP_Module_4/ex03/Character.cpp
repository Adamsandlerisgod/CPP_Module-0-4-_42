#include "Character.hpp"
// Default constructor
Character::Character() {
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Character::Character(const Character& other) {
	std::cout << "Copy consrtuctor called" << std::endl;
    // Implementation here
}
// Copy assignment operator
Character& Character::operator=(const Character& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
        // Implementation here
    }
    return *this;
}
// Destructor
Character::~Character() {
	std::cout << "Destructor called" << std::endl;
}
