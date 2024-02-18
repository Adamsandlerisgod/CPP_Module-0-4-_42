/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:40:29 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/18 16:51:17 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// int main()
// {
// 	const AAnimal	*meta[20]; 

// 	for (int f = 0; f < 20; f++)
// 	{
// 		if (f % 2 == 1)
// 			meta[f] = new Dog();
// 		else
// 			meta[f] = new Cat(); 
// 	}
// 	for (int i = 0; i < 20; i++)
// 	{
// 		std::cout << meta[i]->getType() << " " << std::endl;
// 		meta[i]->makeSound();
// 		delete meta[i];
// 	}

// 	// const AAnimal Africa = new AAnimal; /*main.cpp:34:29: error: allocating an object of abstract class type 'AAnimal'*/
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
