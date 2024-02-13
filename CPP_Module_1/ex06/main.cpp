/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:09:38 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/13 21:07:04 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **argv)
{
	if (ac != 2)
		return(cout << "input valid string please : Hint: DEBUG/INFO/WARNING/ERROR" << endl, 0);
	Harl	harl;
	string	level = argv[1];
	harl.complain(level);
	return (0);
}