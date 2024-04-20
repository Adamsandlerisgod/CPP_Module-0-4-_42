/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:30:14 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/20 15:45:50 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
# define Base_HPP
#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
	public:
		virtual	~Base(void){}
};

class A: public Base{};	
class B: public Base{};	
class C: public Base{};

Base * generate(void){
	int	i = rand() % 3;
	switch (i){
	case 0: {return (new A);}
	case 1: {return (new B);}
	default:{return (new C);}
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error: Not A, B, or C" << std::endl;
}

void identify(Base& p){
	try{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(...){}
	try{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(...){}
	try{
		C &c = dynamic_cast<C&>(p);
		(void)c;		
		std::cout << "C" << std::endl;
	}
	catch(...){
		std::cout << "Error: Not A, B, or C" << std::endl;
	}
}


#endif // Base_HPP
