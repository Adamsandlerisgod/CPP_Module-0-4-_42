#include "../includes/Span.hpp"

// Default constructor
Span::Span(void){
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int size) : _size(size), _pos(0){
	std::cout << "Proper Constructor Called" << std::endl;

}

// Copy constructor
Span::Span(const Span& other) {
	std::cout << "Copy consrtuctor called" << std::endl;
	*this = other;
}

// Copy assignment operator
Span& Span::operator=(const Span& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other) {
			this->_size = other.getSize();
			this->_array = other.getArray();
		}
	return *this;
}
// Destructor
Span::~Span() {
	std::cout << "Destructor called" << std::endl;
}


void	Span::addNumber(const int &number){
	if (_pos + 1 <= _size){
		_array.push_back(number);
		_pos++;
	}
	else
		throw std::out_of_range("not enough space to add elements");

}

void	Span::addNumber(std::vector<int>::iterator begin, \
 	std::vector<int>::iterator end){
	int size_of_range = std::distance(begin, end);
	if (_pos + size_of_range + 1 <= _size){
		for(std::vector<int>::iterator start = begin; start < end; start++){
			_array.push_back(*start);
		}
	}
	else
		throw std::out_of_range("not enough space to add elements");
}

unsigned int Span::getSize(void) const{return (this->_size);}

unsigned int Span::getPos(void) const{return (this->_pos);}

std::vector<int> Span::getArray(void) const{return (this->_array);}

int	Span::shortestSpan(void) const{
	int diff = std::numeric_limits<int>::max();
	if (_size < 2)
		throw std::out_of_range("not enough elements");
	for(int pos = 0; pos < static_cast<int>(_size); pos++){
		for(int pos2 = pos + 1; pos2 < static_cast<int>(_size); pos2++){
			if (abs(_array[pos] - _array[pos2]) < diff)
				diff = abs(_array[pos] - _array[pos2]);
		}
	}
	return (diff);
}

int	Span::longestSpan(void) const{
	if (_size < 2)
		throw std::out_of_range("not enough elements");
	int x = *(std::max_element(_array.begin(), _array.end()));
	int y = *(std::min_element(_array.begin(), _array.end()));
	return (x - y);
}
