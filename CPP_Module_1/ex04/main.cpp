/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:06:12 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 23:07:30 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

int	main(int ac, char **argv)
{
	
	FileReplace		fr;
	
	if (ac != 4 || !argv[1] || !argv[2] || !argv[3])
		return (std::cout << "Fail: hint: ./FileReplace {filename} {searchstr} {replacestr}" << std::endl , 0);
	string	filename = argv[1];
	string	searchStr = argv[2];
	string	replaceStr = argv[3];

	if (!(fr.readFile(filename)))
		return (0);
	fr.replaceAll(fr.getStr(), searchStr, replaceStr);
	fr.writeFile(filename);
	return (0);
		
		
}
