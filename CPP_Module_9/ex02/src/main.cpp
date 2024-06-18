/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:37:49 by whendrik          #+#    #+#             */
/*   Updated: 2024/06/13 14:40:18 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main(int ac, char **argv){
	if (ac <= 1){
		std::cerr << "Not enough arguments" << std::endl;
		exit (EXIT_FAILURE);
	}
	for (size_t i = 1; argv[i]; i++){
		int num = str_to_int<int>(argv[i]);
		if (num < 0){
			std::cerr << "Error" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
	PmergeMe Pmerge(argv);
}