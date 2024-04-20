#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cctype>
# include <cstddef> // Include for nullptr



template <typename T>
class Array
{
private:
	unsigned int _size;
	T *_array;
public:
	Array<T>(void) : _size(0), _array(NULL){}

	Array(unsigned int n) : _size(n), _array(new T[n]){}

	~Array(void){ delete [] this->_array;}

	Array<T>(const Array &other) : _size(other._size), _array(new T[other._size])
	{
		for(unsigned int i = 0; i < _size; i++)
			this->_array[i] = other._array[i];
	}

	Array<T>	&operator=(const Array<T>  &other){
	if (this != &other)
	{
		if (this->_array != NULL)
			delete [] this->_array;
		this->_size = other._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++){
			this->_array[i] = other._array[i];
		}
	}
	return (*this);
	}

	unsigned int	size(void) const{return this->_size;}

	T		&operator[](unsigned int i){
		if (i > _size)
			throw std::exception();
		return (_array[i]);
	}

};




#endif