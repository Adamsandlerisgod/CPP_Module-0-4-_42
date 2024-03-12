#ifndef AAnimal_HPP
# define AAnimal_HPP
#include <iostream>
#include "clean_code.hpp"
#include "Brain.hpp"

class AAnimal : public Brain
{
	protected:
		std::string	_type;
		AAnimal();
    	AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual	~AAnimal();
		virtual void	setType(std::string type);
	public:
		std::string	getType(void) const;
		virtual	void	makeSound(void) const = 0;

};
#endif // AAnimal_HPP
