/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:53:14 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/28 14:40:59 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(string name) : _name(name), _hitPoint(10),  _energyPoint(10), _attackDamage(0)
{
	cout << GRAY << "ClapTrap called" << RESET << endl;
    this->_name = name;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) :
    _name(other._name), _hitPoint(other._hitPoint), _energyPoint(other._energyPoint), _attackDamage(other._attackDamage)
     {
	cout << TEAL << "Copy of " << this->_name << " called" << RESET << endl;
}
// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	cout << TEAL << "Copy Assignment operator called" << RESET << endl;
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
	cout << GRAY << "ClapTrap destroyed"  << RESET << endl;
}

void ClapTrap::attack(const string& target)
{
    if (this->_energyPoint == 0)
        {
            cout << "Clap Trap " << this->_name << " has no energy" << endl;
            return ;
        }
    this->_energyPoint--;
    cout << "ClapTrap " << this->_name << " attacks ";
    cout << target << " causing " << this->_attackDamage;
    cout << " points of damage!" << endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoint <= 0)
    {
        cout << "ClapTrap " << _name << " is already dead, can't damage the dead" << endl;
        return ;
    }
    _hitPoint -= amount;
    cout << "ClapTrap " << _name << " took " << amount << " damage" << endl;
    if (_hitPoint > 0)
        cout << "it has " << _hitPoint << " health left" << endl;
    else
        cout << "ClapTrap " << _name << " has died" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint == 0)
    {
        cout << "ClapTrap " << _name << " has no energy" << endl;
        return ;
    }
    else if (_hitPoint <= 0)
    {
        cout << "ClapTrap " << _name << " is dead, can't repair the dead" << endl;
        return ;
    }
    _hitPoint += amount;
    cout << "ClapTrap " << _name << " has been repaired" << endl;
    cout << "it has " << _hitPoint << " health left" << endl;
}
