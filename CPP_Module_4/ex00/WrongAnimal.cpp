/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/17 21:14:42 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() 
{
	std::cout << "Generic WrongAnimal constructor called" << std::endl;
}
// Copy constructor
WrongAnimal::WrongAnimal(WrongAnimal& other) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) 
        this->_type = other._type;
    return *this;
}
// Destructor
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string  WrongAnimal::getType() const {
    return(this->_type);
}

void    WrongAnimal::makeSound(void) const{
   std::cout << "Generic WrongAnimals don't make noises" << std::endl;
}

void    WrongAnimal::setType(std::string type)
{
    _type = type;
}
