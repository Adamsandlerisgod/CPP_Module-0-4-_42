/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:32:34 by whendrik          #+#    #+#             */
/*   Updated: 2024/03/12 21:16:51 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < SOURCE_SLOTS; i++)
		_source_slots[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < SOURCE_SLOTS; i++)
		if (_source_slots[i])
			delete _source_slots[i];
}

MateriaSource &MateriaSource:: operator=(const MateriaSource& other) {
	for (int i = 0; i < SOURCE_SLOTS; i++)
	{
		if (other._source_slots[i])
			_source_slots[i] = other._source_slots[i]->clone();
		else
			_source_slots[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* type) {
	// std::cout << "Learning " << type->getType() << std::endl;
	for (int i = 0; i < SOURCE_SLOTS; i++)
	{
		if (!_source_slots[i])
		{
			_source_slots[i] = type;
			return;
		}
	}
	delete type;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	// std::cout << "Creating " << type << std::endl;
	for (int i = 0; i < SOURCE_SLOTS; i++)
	{
		if (_source_slots[i] && _source_slots[i]->getType() == type)
			return _source_slots[i]->clone();
	}
	return NULL;
}
