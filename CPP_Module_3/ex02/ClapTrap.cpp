/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:53:14 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/16 19:28:17 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _name("default name"), _hitPoint(10),  _energyPoint(10), _attackDamage(0)
{
	std::cout << GRAY << "ClapTrap called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10),  _energyPoint(10), _attackDamage(0)
{
	std::cout << GRAY << "ClapTrap called" << RESET << std::endl;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << GRAY << "ClapTrap called" << RESET << std::endl;
    *this = other;
}
// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoint = other._energyPoint;
        this->_hitPoint = other._hitPoint;
    }
    return (*this);
}
// Destructor
ClapTrap::~ClapTrap() {
	std::cout << GRAY << "ClapTrap destroyed"  << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoint == 0)
    {
        std::cout << "Clap Trap " << this->_name << " has no energy" << std::endl;
        return ;
    }
    this->_energyPoint--;
   std::cout << "ClapTrap " << this->_name << " attacks ";
   std::cout << target << " causing " << this->_attackDamage;
   std::cout << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoint <= 0)
    {
       std::cout << "ClapTrap " << _name << " is already dead, can't damage the dead" << std::endl;
        return ;
    }
    _hitPoint -= amount;
   std::cout << "ClapTrap " << _name << " took " << amount << " damage" << std::endl;
    if (_hitPoint > 0)
       std::cout << "it has " << _hitPoint << " health left" << std::endl;
    else
       std::cout << "ClapTrap " << _name << " has died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint == 0)
    {
       std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
        return ;
    }
    else if (_hitPoint <= 0)
    {
       std::cout << "ClapTrap " << _name << " is dead, can't repair the dead" << std::endl;
        return ;
    }
    _hitPoint += amount;
   std::cout << "ClapTrap " << _name << " has been repaired" << std::endl;
   std::cout << "it has " << _hitPoint << " health left" << std::endl;
}
