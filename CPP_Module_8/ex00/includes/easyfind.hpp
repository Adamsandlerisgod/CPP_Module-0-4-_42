#ifndef easyfind_HPP
# define easyfind_HPP
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <deque>

template<typename T>
bool	easyfind(T &haystack, int needle){
	try{
		typename T::iterator pos;
		pos = std::find(haystack.begin(), haystack.end(), needle);
		if (pos != haystack.end())
		{
			std::cout << "Element: " << needle << " found in container" << std::endl;
			return true;
		}
			std::cout << "Element: " << needle << " not found in container" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Invalid container" << std::endl;
	}
	return (false);
}
#endif // easyfind_HPP

/*
Write a function template easyfind that accepts a type T. It takes two parameters.
The first one has type T and the second one is an integer.
Assuming T is a container of integers, this function has to find the first occurrence
of the second parameter in the first parameter.
If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave.
Of course, implement and turn in your own tests to ensure everything works as expected.*/
