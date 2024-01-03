/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/29 18:35:55 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal() 
{
	cout << "Generic Animal constructor called" << endl;
}
// Copy constructor
Animal::Animal(const Animal& other) {
	cout << "Animal Copy constructor called" << endl;
    *this = other;
}
// Copy assignment operator
Animal& Animal::operator=(const Animal& other) {
	cout << "Animal Assignment operator called" << endl;
    if (this != &other) 
        this->_type = other._type;
    return *this;
}
// Destructor
Animal::~Animal() {
	cout << "Animal Destructor called" << endl;
}

string  Animal::getType() const {
    return(this->_type);
}

void    Animal::makeSound(void) const{
    cout << "*Generic Animal Noises*" << endl;

}
