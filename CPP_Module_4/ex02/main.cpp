/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:40:29 by whendrik          #+#    #+#             */
/*   Updated: 2024/03/12 21:17:56 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AAnimal.hpp"
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
	// const AAnimal Africa = new AAnimal; // error: allocating an object of abstract class type 'AAnimal'*/
    return 0;
}
