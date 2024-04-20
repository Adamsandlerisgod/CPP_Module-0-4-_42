#ifndef Iter_HPP
# define Iter_HPP

#include <iostream>
#include <string>
#include <cctype>

template<typename A>
void	iter(A *address, size_t length, void (*function)(A &)){
	for(size_t i = 0; i < length; i++){
		function(address[i]);
	}
}

template<typename w>
void add_1(w &x){
	x += 1;
}

template<typename f>
void	printer(f &x){
	try{
		std::cout << x << std::endl;
	}
	catch(std::exception &e){
		std::cout << "Not printable" << std::endl;
	}
		
}

#endif
