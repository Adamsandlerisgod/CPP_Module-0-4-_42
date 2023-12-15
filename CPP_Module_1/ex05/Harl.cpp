/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:31:17 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/02 18:46:58 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){cout << GRAY << "...Initiating Harl..." << RESET << endl;}
Harl::~Harl(){cout << GRAY << "...Destroying Harl..." << RESET << endl;}

void	Harl::complain(string level)
{
	if (level.compare("DEBUG") && level.compare("INFO") &&
		level.compare("WARNING") &&	level.compare("ERROR"))
	{
		cout << "input valid string please : Hint: DEBUG/INFO/WARNING/ERROR" << endl;
		return ;
	}
	switch (level[0])
	{
		case 'D': selector = &Harl::debug;
			break;
		case 'I': selector = &Harl::info;
			break;
		case 'W': selector = &Harl::warning;
			break;
		case 'E': selector = &Harl::error;
			break;
		default:
			return;
	}
	(this->*selector)();
}

void	Harl::debug()
{
	cout << GREEN << "[DEBUG]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << endl;
}

void	Harl::info()
{
	cout << YELLOW << "[INFO]" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!" << endl;
	cout << "If you did, I wouldn't be asking for more!" << RESET << endl;
}

void	Harl::warning()
{
	cout << TEAL << "[WARNING]" << endl;
	cout << "I think I deserve to have some extra bacon for free." << endl;;
	cout << "I've been coming for years whereas you started working here since last month." << RESET << endl;
}

void	Harl::error()
{
	cout << RED << "[ERROR]" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << RESET << endl;
}