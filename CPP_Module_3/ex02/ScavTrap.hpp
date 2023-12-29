
#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(string name);
		~ScavTrap();

		void	attack(const string& target);
		void	guardGate(void);
};

#endif
