/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:18:04 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/17 17:27:58 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
    _name = "default_name";
	std::cout << GRAY << "FragTrap called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap() 
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	_name = name;
	std::cout << GRAY << "FragTrap called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << GRAY << "FragTrap called" << RESET << std::endl;
}
// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoint = other._energyPoint;
        this->_hitPoint = other._hitPoint;
    }
    return (*this);
}

FragTrap::~FragTrap() {
	std::cout << GRAY << "FragTrap " << _name << " destroyed"  << RESET << std::endl;
}

void	FragTrap::highFiveGuys()
{
	if (_energyPoint == 0)
    {
       std::cout << "FragTrap " << _name << " has no energy" << std::endl;
        return ;
    }
    else if (_hitPoint <= 0)
    {
       std::cout << "FragTrap " << _name << " is dead, he can't do much" << std::endl;
        return ;
    }
	std::cout << "FragTrap " << this->_name << " is offering highfives to his people" << std::endl;
}
