#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP
#include <iostream>
#include "clean_code.hpp"

class WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal();
    	WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		virtual	~WrongAnimal();
		std::string	getType(void) const;
		virtual	void	makeSound(void) const;
};
#endif // WrongAnimal_HPP
