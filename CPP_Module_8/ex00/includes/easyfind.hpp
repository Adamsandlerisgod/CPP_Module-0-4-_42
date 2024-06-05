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
			std::cerr << "Error: Element: " << needle << " not found in container" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Invalid container" << std::endl;
	}
	return (false);
}
#endif
