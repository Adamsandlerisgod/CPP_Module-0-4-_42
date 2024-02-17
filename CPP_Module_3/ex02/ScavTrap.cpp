/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:50:24 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/16 19:35:20 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
    _name = "default_name";
	std::cout << GRAY << "ScavTrap called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap() 
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	_name = name;
	std::cout << GRAY << "ScavTrap called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << GRAY << "ScavTrap called" << RESET << std::endl;
}
// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoint = other._energyPoint;
        this->_hitPoint = other._hitPoint;
    }
    return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << GRAY << "ScavTrap " << _name << " destroyed"  << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
    if (_energyPoint == 0)
    {
       std::cout << "ScavTrap " << _name << " has no energy" << std::endl;
        return ;
    }
    else if (_hitPoint <= 0)
    {
       std::cout << "ScavTrap " << _name << " is dead, he can't do much" << std::endl;
        return ;
    }
	std::cout << "ScavTrap " << _name << " is now in gatekeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoint == 0)
        {
           std::cout << "Scav Trap " << _name << " has no energy buddy" << std::endl;
            return ;
        }
    _energyPoint--;
   std::cout << "ScavTrap " << _name << " attacks ";
   std::cout << target << " causing " << _attackDamage;
   std::cout << " points of damage!" << std::endl;
}
