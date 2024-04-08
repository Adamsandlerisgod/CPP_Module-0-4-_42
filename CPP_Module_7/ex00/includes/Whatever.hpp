#ifndef Whatever_HPP
# define Whatever_HPP
#include <iostream>
#include <string>

template<typename A>
void	swap(A& value, A& value2){
	std::swap(value, value2);
}

template<typename B>
B	min(B& value, B& value2){
	return(std::min(value, value2));
}

template<typename C>
C	max(C& value, C& value2){
	return(std::max(value2, value));
}

#endif // Whatever_HPP
