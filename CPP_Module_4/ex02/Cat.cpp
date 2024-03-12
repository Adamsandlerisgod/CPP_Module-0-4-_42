/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:28:53 by whendrik          #+#    #+#             */
/*   Updated: 2024/03/09 10:40:51 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat(): _brain(new Brain())
{
    setType("Cat");
	std::cout << "Cat constructor called" << std::endl;
}
// Copy constructor
Cat::Cat(const Cat& other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Assignment operator called" << std::endl;
    setType(other.getType());
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
