#ifndef Floor_HPP
# define Floor_HPP
#include <iostream>

class Floor {
	public:
		// Default constructor
		Floor();
		// Copy constructor
    Floor(const Floor& other);
		// Copy assignment operator
		Floor& operator=(const Floor& other);
		// Destructor
		~Floor();
};
#endif // Floor_HPP
