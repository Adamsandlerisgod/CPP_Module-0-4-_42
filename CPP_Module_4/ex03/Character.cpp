/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:27:11 by whendrik          #+#    #+#             */
/*   Updated: 2024/03/13 14:49:47 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
// Default constructor
Character::Character() : _name("") {
	for (int i = 0; i < SLOTS; i++)
		_inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;

}

Character::Character(const std::string name) : _name(name) {
	for (int i = 0; i < SLOTS; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " constructor called" << std::endl;

}

Character::Character(Character& other) : _name(other._name) {
		*this = other;
}

// Copy assignment operator
Character& Character::operator=(const Character& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this == &other) {
		return (*this);
    }
	const_cast<std::string&>(_name) = other.getName();
	for (int i = 0; i < SLOTS; i++)
	{
		if (_inventory[i] != NULL)
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
    return (*this);
}
// Destructorother._name;
Character::~Character() {
	// std::cout << "Destructor called" << std::endl;
	for (int i = 0; i < SLOTS; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}
}

const std::string& Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < SLOTS; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			// std::cout << "Materia " << m->getType() << " equipped" << std::endl;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
	delete m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= SLOTS - 1 && _inventory[idx] != NULL)
	{
		Floor::getInstance().dropMateria(_inventory[idx]);
		_inventory[idx] = NULL;
		std::cout << "Materia unequipped" << std::endl;
	} 
	else{
		std::cout << "Invalid index" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= SLOTS - 1 && _inventory[idx] != NULL)
	{
		_inventory[idx]->use(target);
	}
	else{
		std::cout << "Invalid index" << std::endl;
	}
}
