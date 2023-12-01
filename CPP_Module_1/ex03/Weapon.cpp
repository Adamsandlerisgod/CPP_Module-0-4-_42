/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:16:50 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 19:50:25 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	std::cout << "Weapon is initialized" << std::endl;
	this->_type = _type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon _type: " << this->_type << " is unexisted" << std::endl;
}

std::string	const&	Weapon::getType()
{
	return(this->_type);
}

void	Weapon::setType(std::string _type)
{
	this->_type = _type;
}