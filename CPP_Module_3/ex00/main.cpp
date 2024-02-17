/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:04:38 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/16 17:42:02 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap1("John Wick");
	ClapTrap	b;
	b = clap1;

	clap1.attack("Goblin");
	clap1.takeDamage(10);
	clap1.takeDamage(10);
	clap1.beRepaired(5);
	
}
