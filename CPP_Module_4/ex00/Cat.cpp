/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/29 18:37:49 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat() 
{
    this->_type = "Cat";
	cout << "Cat constructor called" << endl;
}
// Copy constructor
Cat::Cat(const Cat& other) {
	cout << "Cat Copy constructor called" << endl;
    *this = other;
}
// Copy assignment operator
Cat& Cat::operator=(const Cat& other) {
	cout << "Cat Assignment operator called" << endl;
    if (this != &other) 
        this->_type = other._type;
    return *this;
}
// Destructor
Cat::~Cat() {
	cout << "Cat Destructor called" << endl;
}

void    Cat::makeSound(void) const{
    cout << YELLOW << "Generic Cat Noises : \" Meooooooooooooow \" " << RESET << endl;
}
