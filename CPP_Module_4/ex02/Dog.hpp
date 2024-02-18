#ifndef Dog_HPP
# define Dog_HPP
#include <iostream>
#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
    	Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		virtual	~Dog();

		virtual	void	makeSound(void) const;
		Brain	*getBrain(void) const;
	private:
		Brain	*_brain;
};
#endif
