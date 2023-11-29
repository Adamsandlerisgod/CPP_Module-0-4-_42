/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:13:28 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/29 21:10:52 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main()
{
	Zombie	*Zombini;
	Zombini = newZombie("Carmichael");
	Zombini->announce();
	delete Zombini;
	randomChump("Eziqiel the 2nd");
	return (0);
}