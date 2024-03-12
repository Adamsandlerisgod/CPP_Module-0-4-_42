/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/29 18:35:55 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal() 
{
	std::cout << "Generic AAnimal constructor called" << std::endl;
}
// Copy constructor
AAnimal::AAnimal(const AAnimal& other) : Brain(){
	std::cout << "AAnimal Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << "AAnimal Assignment operator called" << std::endl;
    if (this != &other) 
        this->_type = other._type;
    return *this;
}
// Destructor
AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string  AAnimal::getType() const {
    return(this->_type);
}

void    AAnimal::makeSound(void) const{
   std::cout << "*Generic AAnimal Noises*" << std::endl;

}

void    AAnimal::setType(std::string type)
{
    _type = type;
}
