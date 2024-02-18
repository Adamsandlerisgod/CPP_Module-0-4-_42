#ifndef Brain_HPP
# define Brain_HPP
#include <iostream>
#include "clean_code.hpp"
class Brain {
	public:
		// Default constructor
		Brain();
		// Copy constructor
		Brain(const Brain& other);
		// Copy assignment operator
		Brain& operator=(const Brain& other);
		// Destructor
		virtual	~Brain();

		std::string	*getIdeas(void)const;
		Brain*	clone(void) const;
	protected:
		std::string	*ideas;
};
#endif // Brain_HPP
