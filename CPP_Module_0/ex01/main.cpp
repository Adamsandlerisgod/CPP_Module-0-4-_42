/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:16:57 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/22 17:30:13 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

using namespace std;

string	ft_capitalizer(string str)
{
	int len = str.length();
	int i = 0;
	
	while(i < len)
	{
		if (str[i] >= 'a' && str[z] =< 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main()
{
	// Phonebook	phonebook;
	string		command;

	cout << "Enter a command: ADD/SEARCH/EXIT";
	while (getline(cin, command))
	{
		if (ft_capitalizer(command) == "ADD")
		{
			
		}
		else if (ft_capitalizer(command) == "SEARCH")
		{
			
		}
		else if (ft_capitalizer(command) == "EXIT")
			return(0);
		else
			cout << "Enter a valid command" << endl;
		cin.clear();
		cout << "Enter a command: ADD/SEARCH/EXIT";
	}
	return (0);
}