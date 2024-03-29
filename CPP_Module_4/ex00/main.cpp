/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:40:29 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/17 21:43:49 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"
// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	delete i;
// 	delete j;
// 	delete meta;
// return 0;
// }

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the wrongcat sound!
	meta->makeSound();
	delete i;
	delete meta;
	return 0;
}
