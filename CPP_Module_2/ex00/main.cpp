/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:34 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/14 18:44:30 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;  // Step 1: Default constructor called, a.getRawBits() = 0
    Fixed b( a );  // Step 2: Copy constructor called, b.getRawBits() = a.getRawBits() = 0
    Fixed c;  // Step 3: Default constructor called, c.getRawBits() = 0
    c = b;  // Step 4: Assignation operator called, c.getRawBits() = b.getRawBits() = 0

    std::cout << a.getRawBits() << std::endl;  // Step 5: Output a.getRawBits(): 0
    std::cout << b.getRawBits() << std::endl;  // Step 6: Output b.getRawBits(): 0
    std::cout << c.getRawBits() << std::endl;  // Step 7: Output c.getRawBits(): 0

    return 0;
}
