/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:41 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/18 16:40:25 by whendrik         ###   ########.fr       */
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
    return (this->_fixedPointValue);
}

void     Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

Fixed::Fixed(int const i)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = i << Fixed::_fractionalBits;
}

Fixed::Fixed(float const f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = (int)roundf(f * (1 << Fixed::_fractionalBits));
    
}

int     Fixed::toInt(void) const
{
    return(this->_fixedPointValue >> Fixed::_fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return (float(this->getRawBits()) / (1 << Fixed::_fractionalBits));
}

std::ostream & operator<<(std::ostream & OUT, Fixed const & obj)
{
	OUT << obj.toFloat();
	return OUT;
}

//Ex02
Fixed & Fixed::operator+(Fixed const & other)
{
	Fixed *tmp = new Fixed(this->toFloat() + other.toFloat());
	return *tmp;
}

Fixed & Fixed::operator-(Fixed const & other)
{
	Fixed *tmp = new Fixed(this->toFloat() - other.toFloat());
	return *tmp;
}

Fixed & Fixed::operator*(Fixed const & other)
{
	Fixed *tmp = new Fixed(this->toFloat() * other.toFloat());
	return *tmp;
}

Fixed & Fixed::operator/(Fixed const & other)
{
	Fixed *tmp = new Fixed(this->toFloat() / other.toFloat());
	return *tmp;
}

Fixed & Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return *this;
}

Fixed & Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return tmp;
}

//<, >, <=, >=, !=, ==
bool Fixed::operator>(Fixed const & other)
{return this->toFloat() > other.toFloat();}

bool Fixed::operator<(Fixed const & other)
{
	return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(Fixed const & other)
{
	return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(Fixed const & other)
{
	return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(Fixed const & other)
{
	return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(Fixed const & other)
{
	return this->toFloat() != other.toFloat();
}

bool Fixed::operator>(Fixed const & other) const
{return this->toFloat() > other.toFloat();}

bool Fixed::operator<(Fixed const & other) const
{return this->toFloat() < other.toFloat();}

bool Fixed::operator>=(Fixed const & other) const
{return this->toFloat() >= other.toFloat();}

bool Fixed::operator<=(Fixed const & other) const
{return this->toFloat() <= other.toFloat();}

bool Fixed::operator==(Fixed const & other) const
{return this->toFloat() == other.toFloat();}

bool Fixed::operator!=(Fixed const & other) const
{return this->toFloat() != other.toFloat();}

//Min max
Fixed & Fixed::min(Fixed & a, Fixed & b)
{return a < b ? a : b;}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{return a > b ? a : b;}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{ return a < b ? a : b;}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{ return a > b ? a : b;}
