/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:04:38 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/28 12:11:16 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap1("John Wick");

	clap1.attack("Racists");
	clap1.takeDamage(10);
	clap1.takeDamage(10);
	clap1.beRepaired(5);
	
}
