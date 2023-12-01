/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:51:32 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 19:22:10 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_B_HPP
# define	HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon	*_weapon;
public:
	HumanB(std::string _name);
	~HumanB();
	void	attack(void) const;
	void	setWeapon(Weapon *_weapon);
};



#endif