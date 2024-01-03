/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:28:53 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/29 18:37:21 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() 
{
    this->_type = "Dog";
	cout << "Dog constructor called" << endl;
}
// Copy constructor
Dog::Dog(const Dog& other) {
	cout << "Dog Copy constructor called" << endl;
    *this = other;
}
// Copy assignment operator
Dog& Dog::operator=(const Dog& other) {
	cout << "Dog Assignment operator called" << endl;
    if (this != &other) 
        this->_type = other._type;
    return *this;
}
// Destructor
Dog::~Dog() {
	cout << "Dog Destructor called" << endl;
}

void    Dog::makeSound(void) const{
    cout << TEAL << "Generic Dog Noises : \" Woof Bark \" " << RESET << endl;
}
