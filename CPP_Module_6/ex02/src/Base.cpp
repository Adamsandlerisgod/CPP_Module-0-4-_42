#include "../includes/Base.hpp"

Base * generate(void){
	int	i = rand() % 3;
	if (i == 0){
		return (new A);
	}
	else if(i == 1){
		return (new B);
	}
	else
		return (new C);
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
	catch(const std::exception &e){}
	try{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception &e){}
	try{
		C &c = dynamic_cast<C&>(p);
		(void)c;		
		std::cout << "C" << std::endl;
	}
	catch(const std::exception &e){
		std::cout << "Error: Not A, B, or C" << std::endl;
	}
}
