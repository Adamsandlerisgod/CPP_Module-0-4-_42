/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:49:55 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 19:50:51 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	{
		Weapon	backScratcher = Weapon("Backscratcher");
		HumanA Jamahall("Jamahall", backScratcher);
		Jamahall.attack();
		backScratcher.setType("Vibrating Mousetrap");
		Jamahall.attack();
	}
	{
		Weapon	backScratcher = Weapon("Backscratcher");
		HumanB Gloria("Gloria Estefan");
		Gloria.attack();
		Gloria.setWeapon(&backScratcher);
		Gloria.attack();
	}
	
}