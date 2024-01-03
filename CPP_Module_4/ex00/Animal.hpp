#ifndef Animal_HPP
# define Animal_HPP
#include <iostream>
#include "clean_code.hpp"

class Animal {
	protected:
		string	_type;
	public:
		Animal();
    	Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual	~Animal();
		string	getType(void) const;
		virtual	void	makeSound(void) const;
};
#endif // Animal_HPP
