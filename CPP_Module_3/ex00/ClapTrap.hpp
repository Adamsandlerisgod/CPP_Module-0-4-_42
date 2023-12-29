#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>
#include "clean_code.hpp"
class ClapTrap {
	public:
		// Default constructor
		ClapTrap(string name);
		// Copy constructor
		ClapTrap(const ClapTrap& other);
		// Copy assignment operator
		ClapTrap& operator=(const ClapTrap& other);
		// Destructor
		~ClapTrap();
		void attack(const string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		string	_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;

};
#endif // ClapTrap_HPP
