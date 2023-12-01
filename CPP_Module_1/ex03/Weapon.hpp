/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:08:29 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 18:31:30 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define	WEAPON_HPP
#include <iostream>
#include <string>
#include <sstream>

class	Weapon
{
	private :
		std::string	_type;
	public :
		Weapon(std::string _type);
		~Weapon();
		std::string const&	getType();
		void	setType(std::string _type);
};

#endif