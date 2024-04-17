#include "../includes/Span.hpp"

int main(){
// try{
// 		Span sp = Span(8);
// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(-43);
// 		sp.addNumber(11);
// 		// std::cout << sp << std::endl;
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// }
// catch(std::exception &e){
// 	std::cout << e.what() << std::endl;
try{
		Span ss = Span(1001);
		ss.addNumber(99);
		std::vector<int> myvector;
		for (int i = 1; i < 1000; i++)
			myvector.push_back(i);
		ss.addNumber(myvector.begin(), myvector.end());
		std::cout << ss.shortestSpan() << std::endl;
		std::cout << ss.longestSpan() << std::endl;
}
catch(std::exception &e){
	std::cout << e.what() << std::endl;
}
}