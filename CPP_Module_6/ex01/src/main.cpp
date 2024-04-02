/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:27:02 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/01 20:14:36 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main(){
	
	Data *data = new Data;
	data->number = 40;
	uintptr_t	serialized = Serializer::serialize(data);
	Data *		deserialized = Serializer::deserialize(serialized);

	std::cout << "data: " << data << std::endl;
	std:: cout << data->number << std::endl;
	std:: cout << Serializer::serialize(data) << std::endl;
	std:: cout << data->number << std::endl;
	std:: cout << Serializer::deserialize(Serializer::serialize(data))->number << std::endl;
	std::cout << "serialized: " << serialized << std::endl;
	std::cout << "deserialized: " << deserialized << std::endl;

	return (0);
}