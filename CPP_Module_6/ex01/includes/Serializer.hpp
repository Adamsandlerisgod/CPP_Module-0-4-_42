/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:48:22 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/01 19:48:27 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP
#include <iostream>
#include <stdint.h>

struct Data{
	std::string key;
	int	number;
};

class Serializer {
	private:
		// Default constructor
		Serializer();
		// Copy constructor
    Serializer(const Serializer& other);
		// Copy assignment operator
		Serializer& operator=(const Serializer& other);
		// Destructor
		~Serializer();
	public:
		static	uintptr_t serialize(Data* ptr);
		static	Data* deserialize(uintptr_t raw);
};
#endif // Serializer_HPP
