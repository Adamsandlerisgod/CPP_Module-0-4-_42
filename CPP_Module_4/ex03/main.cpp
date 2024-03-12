/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:49:40 by whendrik          #+#    #+#             */
/*   Updated: 2024/03/12 21:14:12 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
// #include "Ice.hpp"
// #include "Cure.hpp"

// #define SIZE 4

// int main() {
// 	IMateriaSource* source1 = new MateriaSource();
// 	for (int i = 0; i < SIZE; i++) {
// 		source1->learnMateria(new Ice());
// 		source1->learnMateria(new Cure());
// 	}

// 	ICharacter* player1 = new Character("player1");
// 	AMateria* material1;

// 	for (int i = 0; i < SIZE; i++) {
// 		material1 = source1->createMateria("ice");
// 		player1->equip(material1);
// 		material1 = source1->createMateria("cure");
// 		player1->equip(material1);
// 	}

// 	MateriaSource* source2 = new MateriaSource();
// 	for (int i = 0; i < SIZE; i++) {
// 		source2->learnMateria(new Ice());
// 		source2->learnMateria(new Cure());
// 	}
// 	MateriaSource* source3 = new MateriaSource();
// 	*source3 = *source2;
// 	MateriaSource* source4 = new MateriaSource(*source3);

// 	Character* player2 = new Character("player2");

// 	for (int i = 0; i < SIZE; i++) {
// 		player2->equip(source4->createMateria("ice"));
// 		player2->equip(source4->createMateria("cure"));
// 	}

// 	Character* friend1 = new Character("friend");
// 	Character* friend2 = new Character("Carmichael");
// 	// *friend2 = *friend1;
// 	Character* friend3 = new Character("not friend");
// 	Character* friend4 = new Character("Wiggins");

// 	player1->use(0, *friend1);
// 	player1->use(1, *friend2);

// 	player2->use(2, *friend3);
// 	player2->use(3, *friend4);

// 	player1->use(4, *friend1);
// 	player2->use(4, *friend1);

// 	for (int i = 0; i < SIZE; i++)
// 		player1->unequip(i);

// 	delete friend1;
// 	delete friend2;
// 	delete friend3;
// 	delete friend4;
// 	delete player1;
// 	delete player2;
// 	delete source1;
// 	delete source2;
// 	delete source3;
// 	delete source4;

// 	return 0;
// }

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}
