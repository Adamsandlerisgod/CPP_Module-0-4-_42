#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Ameteria constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type) {
}

AMateria::AMateria(AMateria& other) {
	*this = other;
}

AMateria::~AMateria() {
}

void	AMateria::setType(const std::string& type) {
    const_cast<std::string&>(_type) = type;
}

const std::string&	AMateria::getType() const {
	return _type;
}

void	AMateria::use(ICharacter& target) {
	std::cout << "The Materia " << this->_type << " has been used on " << target.getName() << "." << std::endl;
}
