/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/18 16:54:44 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() 
{
    this->_type = "Dog";
    this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}
// Copy constructor
Dog::Dog(const Dog& other) {
	std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
    this->_brain = other.getBrain()->clone();

}
// Copy assignment operator
Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Assignment operator called" << std::endl;
    this->_type = other._type;
    this->_brain = other.getBrain()->clone();
    return *this;
}
// Destructor
Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
    delete this->_brain;
}

void    Dog::makeSound(void) const{
   std::cout << YELLOW << "Generic Dog Noises : \" Awooooooof \" " << RESET << std::endl;
}

Brain*	Dog::getBrain(void) const
{
    return(this->_brain);
}
