/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:48:05 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 19:49:57 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : _name(_name), _weapon(_weapon)
{
	std::cout << "HumanA : " << _name << " is born." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA : " << _name << " is obliterated." << std::endl;
	
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his mighty " << _weapon.getType() << std::endl;
}