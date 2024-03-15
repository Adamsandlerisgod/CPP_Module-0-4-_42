#include "Floor.hpp"
// Default constructor
Floor::Floor() {
	std::cout << "Floor default constructor called" << std::endl;
}
// Destructor
Floor::~Floor() {
	for (unsigned int i = 0; i < _size; i++) {
		delete _floor[i];
		_floor[i] = NULL;
	}
}
Floor& Floor:: getInstance() {
	static Floor instance;
	return instance;
}

void Floor::dropMateria(AMateria* type) {
		if (_size == SIZE_OF_FLOOR) {
		for (unsigned int i = 0; i < _size; i++)
			delete _floor[i];
		_size = 0;
	}
	_floor[_size] = type;
	_size++;
}
