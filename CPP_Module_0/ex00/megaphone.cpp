/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:43:35 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/29 20:15:19 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>


int	main(int ac, char **av)
{
	int j;
	
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
		return (0);
	}
	else
	{
		while(ac > 1)
		{
			j = 0;
			av++;
			while((*av)[j] != '\0')
				std::cout << static_cast<char>(toupper((*av)[j++]));
			ac--;
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}


