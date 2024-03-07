#ifndef Ice_HPP
# define Ice_HPP
#include <iostream>

class Ice {
	public:
		// Default constructor
		Ice();
		// Copy constructor
    Ice(const Ice& other);
		// Copy assignment operator
		Ice& operator=(const Ice& other);
		// Destructor
		~Ice();
};
#endif // Ice_HPP
