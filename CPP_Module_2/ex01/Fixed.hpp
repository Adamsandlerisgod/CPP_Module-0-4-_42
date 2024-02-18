/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:38 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/14 19:09:45 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
#define Fixed_HPP
#include <iostream>
#include <cmath>
#include <ostream>

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
        Fixed(int const i);
        Fixed(float const f);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float	toFloat(void) const;

    private:
        int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};
std::ostream&	operator<<(std::ostream& out, Fixed const& obj);

#endif // Fixed_HPP
