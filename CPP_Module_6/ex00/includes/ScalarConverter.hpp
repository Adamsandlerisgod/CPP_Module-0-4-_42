#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP
#include <iostream>
#include <cmath>
#include <limits>

class ScalarConverter {
	public:
		void	convertToChar(double input);
		void	convertToFloat(double input);
		void	convertToInt(double input);
		void	convertToDouble(double input);
		static	void	convert(char * input);
	
	private:
		// Default constructor
		ScalarConverter();
		// Copy constructor
		ScalarConverter(const ScalarConverter& other);
		// Copy assignment operator
		ScalarConverter& operator=(const ScalarConverter& other);
		// Destructor
		virtual ~ScalarConverter();
};
#endif // ScalarConverter_HPP
