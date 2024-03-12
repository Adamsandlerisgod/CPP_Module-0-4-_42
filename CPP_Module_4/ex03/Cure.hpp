#ifndef Cure_HPP
# define Cure_HPP
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		// Default constructor
		Cure();
		// Copy constructor
    Cure(const Cure& other);
		// Copy assignment operator
		Cure& operator=(const Cure& other);
		// Destructor
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif // Cure_HPP
