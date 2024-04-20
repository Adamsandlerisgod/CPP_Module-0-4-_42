/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:27:42 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/20 18:51:10 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Whatever.hpp"

int	main(){
	int value = 4544;
	int value2 = 4545;

	std::cout << value << std::endl;
	std::cout << value2 << std::endl;
	::swap(value, value2); 
	std::cout << value << std::endl;
	std::cout << value2 << std::endl;
	std::cout << "min: " << ::min(value, value2) << std::endl;
	std::cout << "max: " << ::max(value, value2) << std::endl;
}


// int	main(){
// 	std::string value = "4544";
// 	std::string value2 = "454car";


// 	std::cout << value << std::endl;
// 	std::cout << value2 << std::endl;
// 	::swap(value, value2); 
// 	std::cout << value << std::endl;
// 	std::cout << value2 << std::endl;
// 	std::cout << "min: " << ::min(value, value2) << std::endl;
// 	std::cout << "max: " << ::max(value, value2) << std::endl;
// }

/*
template<typename C>
const C*	max(const C& value,const C& value2){
	const C *biggest_num = &(std::max(value2,value));
	return(biggest_num);
}

	std::cout << "address of value: " << &value << std::endl;
	std::cout << "address of value2: " << &value2 << std::endl;
	const int *max_address = max(value, value2);
	std::cout << "max: " << *max_address << "      address of max is: " << max_address << std::endl;
*/