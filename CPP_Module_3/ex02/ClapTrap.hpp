#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>
#include "clean_code.hpp"
class ClapTrap {
	public:
		// Default constructor
		ClapTrap();
		// Parameterized Constructor
		ClapTrap(std::string name);
		// Copy constructor
		ClapTrap(const ClapTrap& other);
		// Copy assignment operator
		ClapTrap& operator=(const ClapTrap& other);
		// Destructor
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string	_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;

};
#endif // ClapTrap_HPP
