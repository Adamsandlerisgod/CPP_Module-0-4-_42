#ifndef	PMERGE_ME_HPP
# define PMERGE_ME_HPP

#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <sstream>

class PmergeMe{
	private:
		std::vector<unsigned int> _vec;
		std::deque<unsigned int> _deque;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(char **argv);
		PmergeMe(const PmergeMe &rhs);
		PmergeMe & operator=(PmergeMe const &rhs);
		// void	addInput(char **argv);
		void	sortVector(char **argv); 
		void	sortDeque(char **argv);
		void	printTimes(void);
		// int	str_to_int(const std::string &stri);
		std::vector<unsigned int> getVector(void) const;
		std::deque<unsigned int> getDeque(void) const;
		double	vectorTime;
		double	dequeTime;

		// template<typename T>
		// void tSortMerge(T &cont, int begin, int end);
		// template<typename T>
		// void tMerge(T &cont, int begin, int mid, int end);
		// template<typename T>
		// void tPrintArray(const T &array);


};

#include "PmergeMe.tpp"





#endif