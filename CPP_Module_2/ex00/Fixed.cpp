/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:41 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/15 18:03:24 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy Assignment Operator called" << std::endl;
    this->setRawBits(other.getRawBits());
    return *this;
}
// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void     Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}
