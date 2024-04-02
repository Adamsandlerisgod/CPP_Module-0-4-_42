/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:48:13 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/01 19:48:18 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
// Default constructor
Serializer::Serializer() {
}
// Copy constructor
Serializer::Serializer(const Serializer& other) {
	*this = other;
}
// Copy assignment operator
Serializer& Serializer::operator=(const Serializer& other) {
    (void)other;
    return *this;
}
Serializer::~Serializer() {
}

uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
	return(reinterpret_cast<Data *>(raw));
}