/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:29:29 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 19:30:45 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A_HPP
# define	HUMAN_A_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon	&_weapon;
public:
	HumanA(std::string _name, Weapon &_weapon);
	~HumanA();
	void	attack(void) const;
};



#endif