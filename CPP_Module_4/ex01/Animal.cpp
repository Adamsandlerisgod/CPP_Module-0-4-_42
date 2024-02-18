/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/17 21:55:00 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal() 
{
	std::cout << "Generic Animal constructor called" << std::endl;
}
// Copy constructor
Animal::Animal(Animal& other) {
	std::cout << "Animal Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
Animal& Animal::operator=(const Animal& other) {
    if (this != &other) 
        this->_type = other._type;
    return *this;
}
// Destructor
Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

std::string  Animal::getType() const {
    return(this->_type);
}

void    Animal::makeSound(void) const{
   std::cout << "Generic Animals don't make noises" << std::endl;
}

void    Animal::setType(std::string type)
{
    _type = type;
}
