#ifndef AMateria_HPP
# define AMateria_HPP
#include <iostream>

class AMateria {
	protected:

	public:
		// Default constructor
		AMateria();
		// Copy constructor
		AMateria(const AMateria& other);
		// Copy assignment operator
		AMateria& operator=(const AMateria& other);
		// Destructor
		~AMateria();
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif // AMateria_HPP
