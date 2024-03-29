/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:28:53 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/17 21:44:04 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() 
{
    setType("Dog");
	std::cout << "Dog constructor called" << std::endl;
}
// Copy constructor
Dog::Dog(Dog& other) {
	std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Assignment operator called" << std::endl;
    if (this != &other) 
        setType(other.getType());
    return *this;
}
// Destructor
Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

void    Dog::makeSound(void) const{
   std::cout << TEAL << "Generic Dog Noises : \" Woof Bark \" " << RESET << std::endl;
}
