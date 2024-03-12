#ifndef AMateria_HPP
# define AMateria_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string _type;
	public:
		
		AMateria();
		AMateria(AMateria& other);
		void setType(const std::string& type);
		virtual	~AMateria();
		AMateria(const std::string & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif // AMateria_HPP
