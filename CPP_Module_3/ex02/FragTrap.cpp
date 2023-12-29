/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:18:04 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/28 16:20:32 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name) 
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	this->_name = name;
	cout << GRAY << "FragTrap " << this->_name << " called" << RESET << endl;
}

FragTrap::~FragTrap() {
	cout << GRAY << "FragTrap " << this->_name << " destroyed"  << RESET << endl;
}

void	FragTrap::highFiveGuys()
{
	cout << "FragTrap " << this->_name << " is offering highfives to his people" << endl;
}