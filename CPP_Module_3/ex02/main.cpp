/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:04:38 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/16 19:42:24 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	frag1("kale");
	FragTrap	frag3("Jesuit");

	frag1.attack("Pablo Escobar");
	frag1.attack("frag3");
	frag3.takeDamage(30);
	frag1.takeDamage(90);
	frag1.highFiveGuys();
	frag1.takeDamage(10);
	frag1.beRepaired(5);
	
}
