#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>
#include <deque>
#include <cstdlib>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	using std::stack<T, Container>::c;

	public:
	MutantStack(void) {};
	MutantStack(const MutantStack& other) { *this = other; }
	~MutantStack(void) {};

	MutantStack&	operator=(const MutantStack& other) {
		this->std::stack<T, Container>::operator=(other);
		return *this;
	}
	typedef typename Container::iterator	iterator;

	iterator	begin() { return (this->c.begin()); }
	iterator	end() { return (this->c.end()); }
};











#endif