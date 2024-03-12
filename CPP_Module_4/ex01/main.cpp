/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:40:29 by whendrik          #+#    #+#             */
/*   Updated: 2024/03/09 10:26:03 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	const Animal	*meta[5]; 

	for (int f = 0; f < 5; f++)
	{
		if (f % 2 == 1)
			meta[f] = new Dog();
		else
			meta[f] = new Cat(); 
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << meta[i]->getType() << " " << std::endl;
		meta[i]->makeSound();
		delete meta[i];
	}

	return 0;
}

// #include "Cat.hpp"
// #include "Dog.hpp"

// int main() {
//     Dog* dog = new Dog();
// 	Cat* cat = new Cat();

// 	Cat* cat_copy = new Cat(*cat);

// 	std::cout << TEAL << *(cat_copy->getIdeas()) << RESET << std::endl; 

// 	dog->makeSound();
// 	delete dog;
// 	delete cat;
// 	if (cat_copy)
// 	{
// 		cat_copy->makeSound();
// 		std::cout << "We deleting the cat copy" << std::endl;
// 		delete cat_copy;
// 	}

//     return 0;
// }
