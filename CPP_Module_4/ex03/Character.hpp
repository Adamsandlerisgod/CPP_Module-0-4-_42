#ifndef Character_HPP
# define Character_HPP
#include <iostream>

class Character {
	public:
		// Default constructor
		Character();
		// Copy constructor
    Character(const Character& other);
		// Copy assignment operator
		Character& operator=(const Character& other);
		// Destructor
		~Character();
};
#endif // Character_HPP
