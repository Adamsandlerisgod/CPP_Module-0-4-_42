/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimalWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/01/10 13:48:45 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() 
{
	std::cout << "Generic WrongAnimal constructor called" << std::endl;
}
// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal Assignment operator called" << std::endl;
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
   std::cout << "*Generic WrongAnimal Noises*" << std::endl;

}
