/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:43:35 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/22 13:51:32 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

using namespace std;

int	main(int ac, char **av)
{
	// char c;
	int j;
	
	if (ac < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< endl;
		return (0);
	}
	else
	{
		while(ac > 1)
		{
			j = 0;
			av++;
			while((*av)[j] != '\0')
				cout << static_cast<char>(toupper((*av)[j++]));
			ac--;
			cout << " ";
		}
		cout << endl;
	}
	return (0);
}


