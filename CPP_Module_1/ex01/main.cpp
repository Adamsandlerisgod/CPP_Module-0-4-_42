/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:13:28 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 17:32:02 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main()
{
	Zombie	*horde;

	horde = zombieHorde(45, "Wickerbasket");
	for(int i = 0; i < 45; i++)
	{
		horde[i].announce();
	}
	delete	[] horde;
	
	return (0);
}