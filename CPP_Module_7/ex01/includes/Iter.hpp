/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:33:54 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/03 16:20:56 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Iter_HPP
# define Iter_HPP

#include <iostream>
#include <string>
#include <cctype>

template<typename A>
void	iter(A *address, size_t length, void (*function)(A &)){
	for(size_t i = 0; i < length; i++){
		function(address[i]);
	}
}

void add_1(int &x){
	x += 1;
}

template<typename f>
void	printer(f &x){
	try{
		std::cout << x + 1 << std::endl;
	}
	catch(std::exception &e){
		std::cout << "Not printable" << std::endl;
	}
		
}

#endif
