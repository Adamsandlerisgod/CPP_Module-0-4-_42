#include "Cure.hpp"
// Default constructor
Cure::Cure(): AMateria("cure") {
}
// Copy constructor
Cure::Cure(const Cure& other) : AMateria("cure"){
	*this = other;
}

// Copy assignment operator
Cure& Cure::operator=(const Cure& other) {
    if (this != &other) {
		setType(other._type);
    }
    return *this;
}

// Destructor	
Cure::~Cure() {
}

AMateria*	Cure::clone() const {
	AMateria* cure = new Cure();
	return cure;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
