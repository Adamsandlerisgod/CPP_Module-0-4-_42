/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:17:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/01/10 13:51:24 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat() 
{
    setType("WrongCat");
	std::cout << "WrongCat constructor called" << std::endl;
}
// Copy constructor
WrongCat::WrongCat(WrongCat& other) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = other;
}
// Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat Assignment operator called" << std::endl;
    if (this != &other) 
        setType(other.getType());
    return *this;
}
// Destructor
WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const{
   std::cout << YELLOW << "Generic WrongCat Noises : \" Oink oink \" " << RESET << std::endl;
}
