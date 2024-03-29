/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:16:25 by whendrik          #+#    #+#             */
/*   Updated: 2024/03/12 21:09:52 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Floor_HPP
# define Floor_HPP
#include <iostream>
# define SIZE_OF_FLOOR 500
#include "AMateria.hpp"

class AMateria;
class Floor 
{
	private:
		AMateria*	_floor[SIZE_OF_FLOOR];
		unsigned int	_size;
		Floor();
		~Floor();
	public:
		static Floor& getInstance();
		void dropMateria(AMateria* type);
		
};
#endif // Floor_HPP
