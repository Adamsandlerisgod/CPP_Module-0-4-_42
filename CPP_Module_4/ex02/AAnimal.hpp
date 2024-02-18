#ifndef AAnimal_HPP
# define AAnimal_HPP
#include <iostream>
#include "clean_code.hpp"
#include "Brain.hpp"

class AAnimal : public Brain
{
	private:
		std::string	_type;
	protected:
		AAnimal();
    	AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual	~AAnimal();
	public:
		std::string	getType(void) const;
		virtual	void	makeSound(void) const = 0;
};
#endif // AAnimal_HPP
