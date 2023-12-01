/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:12:20 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 17:32:56 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "A " << name << " has been borne into a miserable existence" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": has died for good this time" << std::endl;
}

void Zombie::setName(std::string name){this->name = name;}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
