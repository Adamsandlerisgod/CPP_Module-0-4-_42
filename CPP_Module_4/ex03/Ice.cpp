#include "Ice.hpp"
// Default constructor
Ice::Ice(): AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}
// Copy constructor
Ice::Ice(const Ice& other) : AMateria("ice"){
	*this = other;
}

// Copy assignment operator
Ice& Ice::operator=(const Ice& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
		setType(other._type);
    }
    return *this;
}

// Destructor	
Ice::~Ice() {
}

AMateria*	Ice::clone() const {
	AMateria* ice = new Ice();
	return ice;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
