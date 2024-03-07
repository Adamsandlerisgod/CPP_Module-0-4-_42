#ifndef Cure_HPP
# define Cure_HPP
#include <iostream>

class Cure {
	public:
		// Default constructor
		Cure();
		// Copy constructor
    Cure(const Cure& other);
		// Copy assignment operator
		Cure& operator=(const Cure& other);
		// Destructor
		~Cure();
};
#endif // Cure_HPP
