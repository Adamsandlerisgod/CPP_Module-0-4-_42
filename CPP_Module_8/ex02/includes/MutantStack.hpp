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

	MutantStack&	operator=(const MutantStack& other) {
		this->std::stack<T, Container>::operator=(other);
		return *this;
	}
	~MutantStack(void) {};
	typedef typename Container::iterator	iterator;

	iterator	start() { return (this->c.begin()); }
	iterator	finish() { return (this->c.end()); }
};


#endif