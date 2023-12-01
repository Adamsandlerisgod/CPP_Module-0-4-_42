/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:56:55 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 17:31:10 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	std::stringstream out;
	
	if(N <= 0)
		return (NULL);
	horde = new Zombie[N];
	std::cout << "The horde be hoarding!!" << std::endl; 
	for(int i = 0; i < N; i++)
	{
		out << i + 1;
		horde[i].setName(name + " " + out.str());
		out.str("");
	}
	return(horde);
}