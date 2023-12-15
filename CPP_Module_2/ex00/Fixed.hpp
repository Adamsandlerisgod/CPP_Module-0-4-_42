
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:38 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/15 17:39:31 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
#define Fixed_HPP
#include <iostream>

class Fixed {
    public:
        // Default constructor
        Fixed(void);
        // Copy constructor
        Fixed(const Fixed& other);
        // Copy assignment operator
        Fixed& operator=(const Fixed& other);
        // Destructor
        ~Fixed();
        int     getRawBits(void) const;
        void     setRawBits(int const raw);
    private:
        int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};
#endif // Fixed_HPP
