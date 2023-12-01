/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:09:34 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 19:26:46 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : _name(_name), _weapon(NULL)
{
	std::cout << "Human B : " << _name << " is born." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human B : " << _name << " is obliterated." << std::endl;
}

void	HumanB::setWeapon(Weapon *_weapon)
{
	this->_weapon = _weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " hasn't equipped a weapon so he is scared to attack " << std::endl;
	else
		std::cout << this->_name << " attacks with his mighty " << _weapon->getType() << std::endl;
}