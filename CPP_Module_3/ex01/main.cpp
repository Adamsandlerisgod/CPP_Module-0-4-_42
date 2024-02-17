/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:04:38 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/16 19:33:44 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scav1("John Wick");
	ScavTrap	s(scav1);
	ClapTrap	clap1("Africa");
	ClapTrap	clap2(clap1);

	scav1.guardGate();
	s.guardGate();
	scav1.attack("Canada");
	scav1.takeDamage(100);
	scav1.beRepaired(5);
}
