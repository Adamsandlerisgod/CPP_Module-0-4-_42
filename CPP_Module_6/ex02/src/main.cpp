/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:30:10 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/02 20:03:18 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int main(){

	std::srand(std::time(NULL));
	
	A *Arm = new A;
	identify(generate());
	identify(Arm);
	identify(NULL);
	
}