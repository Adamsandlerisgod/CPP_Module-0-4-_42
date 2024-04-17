#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <exception>
#include <limits>

class Span {
	private:
		std::vector<int> _array;
		unsigned int _size;
		unsigned int _pos;
	public:
		Span(void);
		Span(unsigned int size);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		unsigned int getSize(void) const;
		unsigned int getPos(void) const;
		std::vector<int> getArray(void) const;
		void	addNumber(const int &number);
		void	addNumber(std::vector<int>::iterator begin, \
			std::vector<int>::iterator end);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
};
#endif // Span_HPP