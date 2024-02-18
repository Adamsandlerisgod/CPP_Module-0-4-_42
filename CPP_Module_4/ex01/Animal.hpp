#ifndef Animal_HPP
# define Animal_HPP
#include <iostream>
#include "clean_code.hpp"
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
    	Animal(Animal& other);
		Animal& operator=(const Animal& other);
		virtual	~Animal();
		std::string	getType(void) const;
		virtual	void	makeSound(void) const;
		void	setType(std::string type);
};
#endif // Animal_HPP
