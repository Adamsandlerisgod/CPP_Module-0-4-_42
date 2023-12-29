/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:13:05 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/28 16:17:16 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAG_TRAP_HPP
# define	FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	
	public:
		FragTrap(string name);
		~FragTrap();
		void	highFiveGuys(void);
};

FragTrap::FragTrap(/* args */)
{
}

FragTrap::~FragTrap()
{
}


#endif