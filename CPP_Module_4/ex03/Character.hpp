#ifndef Character_HPP
# define Character_HPP
#include <iostream>
#include "ICharacter.hpp"

#define SLOTS 4
class Character : public ICharacter
{
	private:
		const std::string	_name;
		AMateria*			_inventory[SLOTS];
	public:
		Character();
		Character(const std::string name);
		Character(Character& other);
		Character& operator=(const Character& other);
		~Character();
		
		const std::string& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
#endif // Character_HPP
