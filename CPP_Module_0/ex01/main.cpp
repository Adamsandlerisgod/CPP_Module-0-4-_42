/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:16:57 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/29 20:51:18 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

#include "Phonebook.hpp"


std::string	capitalizer(std::string str)
{
	int len = str.length();
	int i = 0;
	
	while(i < len)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main()
{
	Phonebook	phonebook;
	std::string		command;

	std::cout << "Enter a command: ADD/SEARCH/EXIT" << std::endl;
	while (std::getline(std::cin, command))
	{
		if (capitalizer(command) == "ADD")
		{
			phonebook.addContact();
		}
		else if (capitalizer(command) == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (capitalizer(command) == "EXIT")
			return(0);
		else
			std::cout << "Enter a valid command" << std::endl;
		std::cin.clear();
		std::cout << "Enter a command: ADD/SEARCH/EXIT" << std::endl;
	}
	return (0);
}