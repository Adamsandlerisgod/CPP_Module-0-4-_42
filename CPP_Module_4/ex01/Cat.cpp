/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/19 14:50:13 by whendrik         ###   ########.fr       */
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
Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
    this->_brain = other.getBrain()->clone();

}
// Copy assignment operator
Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Assignment operator called" << std::endl;
    setType(other.getType());
    if (_brain != nullptr){
        delete _brain;
        _brain = nullptr;
    }
    if (_brain != nullptr){
    this->_brain = other._brain->clone();
    }
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
