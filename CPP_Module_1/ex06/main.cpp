/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:09:38 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/02 18:43:08 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **argv)
{
	if (ac != 2)
		return (0);
	Harl	harl;
	string	level = argv[1];
	harl.complain(level);
	// harl.complain("INFO");
	// harl.complain("WARNING");
	// harl.complain("ERROR");
	/*For testing wrong inputs*/
	// harl.complain("ERRORist");
	return (0);
}