/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:33:39 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/03 16:20:46 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Iter.hpp"



int main(){
	// std::string arr1[5] = {"a","b","c","d","e"};
	char arr1[5] = {'a', 'b', 'c', 'd', 'e'};
	int arr[5] = {0, 1, 2, 3, 4};

	iter(arr1, 5, &printer);
	iter(arr, 5, &add_1);
	return (0);
}
/*
Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be called on every element of the array.
Turn in a main.cpp file that contains your tests. Provide enough code to generate a
test executable.
Your iter function template must work with any type of array. The third parameter
can be an instantiated function template.
*/