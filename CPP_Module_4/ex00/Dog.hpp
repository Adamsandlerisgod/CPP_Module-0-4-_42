#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
    	Dog(Dog& other);
		Dog& operator=(const Dog& other);
		virtual	~Dog();

		virtual	void	makeSound(void) const;
};
#endif
