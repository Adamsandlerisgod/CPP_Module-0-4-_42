#include "../includes/Array.hpp"
#include <iostream>

int	main(void)
{
	Array<int>		arrayInt(5);
	Array<char>		arrayChar(5);
	Array<std::string>	arrayString(5);
	Array<int>		arrayInt3;
	
	for (int i = 0; i < 5; i++)
	{
		arrayInt[i] = i;
		arrayChar[i] = 'a' + i;
		arrayString[i] = "String ";
		arrayString[i] += static_cast<char>(i + '0');
	}
	arrayInt3 = arrayInt;
	Array<int>		arrayInt2(arrayInt);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Int[" << i << "] : " << arrayInt[i] << std::endl;
		std::cout << "Int[" << i << "] : " << arrayInt2[i] << std::endl;
		std::cout << "Int[" << i << "] : " << arrayInt3[i] << std::endl;
		std::cout << "Char[" << i << "] : " << arrayChar[i] << std::endl;
		std::cout << "String[" << i << "] : " << arrayString[i] << std::endl;
		std::cout << std::endl;
	}
	return (0);
}