#ifndef Ice_HPP
# define Ice_HPP
#include <iostream>
#include "AMateria.hpp"
class Ice : public AMateria{
	public:
		// Default constructor
		Ice();
		// Copy constructor
    Ice(const Ice& other);
		// Copy assignment operator
		Ice& operator=(const Ice& other);
		// Destructor
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif // Ice_HPP
