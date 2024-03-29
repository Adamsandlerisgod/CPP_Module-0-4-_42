/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/17 21:44:12 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat() 
{
    setType("Cat");
	std::cout << "Cat constructor called" << std::endl;
}
// Copy constructor
Cat::Cat(Cat& other) {
	std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Assignment operator called" << std::endl;
    if (this != &other) 
        setType(other.getType());
    return *this;
}
// Destructor
Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound(void) const{
   std::cout << YELLOW << "Generic Cat Noises : \" Meooooooooooooow \" " << RESET << std::endl;
}
