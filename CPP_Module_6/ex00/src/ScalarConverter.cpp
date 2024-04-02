#include "../includes/ScalarConverter.hpp"

// Default constructor
ScalarConverter::ScalarConverter() {
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}
// Copy assignment operator
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
    return *this;
}
// Destructor
ScalarConverter::~ScalarConverter() {
}


void	ScalarConverter::convertToChar(double input){
	char c;
	if (std::isinf(input) || std::isnan(input))
	{
		std::cout << "char: Impossible" << std::endl;
		return ;
	}
	c = static_cast<char>(input);
	if (!(std::isprint(c)))
		return(std::cout << "char: Not displayable" << std::endl, void());
	std::cout << "char: '" << c << "\'" << std::endl;
		
}

void	ScalarConverter::convertToFloat(double input){
	float f;
	if (__FLT_MAX__ < input || __FLT_MIN__ > input)
	{
		std::cout << "float: Impossible" << std::endl;
		return;
	}
	try{
		f = static_cast<float>(input);
	}
	catch (std::exception &e){
		std::cout << "float: Impossible" << std::endl;
		return ;
	}
	if (f - static_cast<int>(f) == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void	ScalarConverter::convertToInt(double input){
	int i;
	if (input > 2147483647|| input < -2147483648 || std::isnan(input))
	{
		std::cout << "int: Impossible" << std::endl;
		return ;
	}
	try{
		i = static_cast<int>(input);
	}
	catch (std::exception &e){
		std::cout << "int: Impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << i << std::endl;
}

void	ScalarConverter::convertToDouble(double input){
	double d;
	if (__DBL_MAX__ < input || __DBL_MIN__ > input)
	{
		std::cout << "double: Impossible" << std::endl;
		return;
	}
	d = static_cast<double>(input);
	if (d - static_cast<int>(d) == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::convert(char *input){
	char *endPtr;
	double c = strtod(input, &endPtr);
	
	if (*endPtr == 'f' && *(endPtr + 1) == '\0')
	{
	}
	else if (*endPtr != '\0' && !(endPtr == input + 1 && *input == '-')) {
		std::cout << "Use digits only. First non-digit character found: " << "'" << *endPtr << "'" << std::endl;
		return ;
	}

	ScalarConverter sc;
	if (input[0] == '-') {
		// Handle negative number
		sc.convertToChar(c);
		sc.convertToInt(c);
		sc.convertToFloat(c);
		sc.convertToDouble(c);
	} else {
		// Handle positive number
		sc.convertToChar(c);
		sc.convertToInt(c);
		sc.convertToFloat(c);
		sc.convertToDouble(c);
	}
}
