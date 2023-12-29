/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:38 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/18 16:41:41 by whendrik         ###   ########.fr       */
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

        Fixed& operator+(const Fixed& other);
        Fixed& operator-(const Fixed& other);
        Fixed& operator*(const Fixed& other);
        Fixed& operator/(const Fixed& other);

        bool operator>(Fixed const & other);
        bool operator<(Fixed const & other);
        bool operator>=(Fixed const & other);
        bool operator<=(Fixed const & other);
        bool operator==(Fixed const & other);
        bool operator!=(Fixed const & other);

        bool operator>(Fixed const & other) const;
		bool operator<(Fixed const & other) const;
		bool operator>=(Fixed const & other) const;
		bool operator<=(Fixed const & other) const;
		bool operator==(Fixed const & other) const;
		bool operator!=(Fixed const & other) const;

        Fixed & operator++(void);
        Fixed & operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed & min(Fixed & a, Fixed & b);
        static Fixed & max(Fixed & a, Fixed & b);
        static Fixed const & min(Fixed const & a, Fixed const & b);
        static Fixed const & max(Fixed const & a, Fixed const & b);


    private:
        int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};
std::ostream&	operator<<(std::ostream& OUT, Fixed const& obj);

#endif // Fixed_HPP
