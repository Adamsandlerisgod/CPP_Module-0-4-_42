/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:26:15 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 17:29:54 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define	ZOMBIE_HPP
#include <iostream>
#include <string>
#include <sstream>


class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name = "Zombie");
		~Zombie();
		void	setName(std::string name);
		void	announce(void);
		
};

Zombie* zombieHorde( int N, std::string name = "Zombie");
#endif