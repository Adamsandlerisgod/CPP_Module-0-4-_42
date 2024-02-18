#ifndef Cat_HPP
# define Cat_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal, public Brain
{
	public:
		Cat();
    	Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		virtual	~Cat();

		virtual	void	makeSound(void) const;
		Brain	*getBrain(void) const;
	private:
		Brain	*_brain;
};
#endif
