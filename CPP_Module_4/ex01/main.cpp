/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:40:29 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/18 16:26:45 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Cat.hpp"
// #include "Dog.hpp"
// int main()
// {
// 	const Animal	*meta[5]; 

// 	for (int f = 0; f < 5; f++)
// 	{
// 		if (f % 2 == 1)
// 			meta[f] = new Dog();
// 		else
// 			meta[f] = new Cat(); 
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		std::cout << meta[i]->getType() << " " << std::endl;
// 		meta[i]->makeSound();
// 		delete meta[i];
// 	}

// 	return 0;
// }

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    Dog* dog = new Dog();
	Cat* cat = new Cat();

	Dog* dog_copy = new Dog(*dog);

	std::cout << TEAL << *(dog->getIdeas()) << RESET << std::endl; 

	delete dog;
	delete cat;
	if (dog_copy)
	{
		std::cout << "We deleting the dog copy" << std::endl;
		delete dog_copy;
	}

    return 0;
}
