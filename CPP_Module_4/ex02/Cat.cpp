/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/16 16:52:37 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat() 
{
    this->_type = "Cat";
    this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}
// Copy constructor
Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
    this->_brain = other.getBrain()->clone();

}
// Copy assignment operator
Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Assignment operator called" << std::endl;
    this->_type = other._type;
    this->_brain = other.getBrain()->clone();
    return *this;
}
// Destructor
Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
    delete this->_brain;
}

void    Cat::makeSound(void) const{
   std::cout << YELLOW << "Generic Cat Noises : \" Meooooooooooooow \" " << RESET << std::endl;
}

Brain*	Cat::getBrain(void) const
{
    return(this->_brain);
}
