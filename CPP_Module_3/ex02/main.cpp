/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:04:38 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/28 14:40:08 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	clap1("John Wick");

	clap1.guardGate();
	clap1.attack("Itself");
	clap1.takeDamage(20);
	// clap1.takeDamage(10);
	clap1.beRepaired(5);
	
}
