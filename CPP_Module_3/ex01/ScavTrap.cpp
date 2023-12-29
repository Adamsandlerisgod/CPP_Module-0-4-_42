/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:50:24 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/28 14:39:14 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name) 
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_name = name;
	cout << GRAY << "ScavTrap " << this->_name << " called" << RESET << endl;
}

ScavTrap::~ScavTrap() {
	cout << GRAY << "ScavTrap " << this->_name << " destroyed"  << RESET << endl;
}

void	ScavTrap::guardGate()
{
	cout << "ScavTrap" << this->_name << " is now in gatekeeper mode" << endl;
}

void ScavTrap::attack(const string& target)
{
    if (this->_energyPoint == 0)
        {
            cout << "Scav Trap " << this->_name << " has no energy buddy" << endl;
            return ;
        }
    this->_energyPoint--;
    cout << "ScavTrap " << this->_name << " attacks ";
    cout << target << " causing " << this->_attackDamage;
    cout << " points of damage!" << endl;
}
