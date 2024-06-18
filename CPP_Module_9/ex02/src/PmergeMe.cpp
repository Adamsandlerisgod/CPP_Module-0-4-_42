#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe(){
	std::cout << "This is empty" << std::endl;
	std::cerr << "Not enough arguments" << std::endl;
	exit (EXIT_FAILURE);
}
PmergeMe::~PmergeMe(){
	std::cout << "Destructor Called" << std::endl;
}
PmergeMe::PmergeMe(char **argv){
	std::cout << "Before:	";
	for (int i = 1; argv[i]; i++){
		std::cout << argv[i] << " ";
	}
	std::cout << std::endl;

	sortVector(argv);
	sortDeque(argv);
	std::cout << "After:	"; tPrintArray(this->_vec);
	printTimes();
	

}

void	PmergeMe::printTimes(void) {
	std::cout << "Time to process a range of " << \
	this->_deque.size() << " with std::deque : " << \
	std::fixed << std::setprecision(5) << this->dequeTime \
	<< " us" << std::endl;
	std::cout << "Time to process a range of " << \
	this->_vec.size() << " with std::vector : " << \
	std::fixed << std::setprecision(5) << this->vectorTime \
	<< " us" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &rhs){
	*this = rhs;
}
PmergeMe & PmergeMe::operator=(PmergeMe const &rhs){
	this->_vec = rhs._vec;
	this->_deque = rhs._deque;
	return (*this);
}

void	PmergeMe::sortVector(char **argv){
	struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

	tAddInput(argv, this->_vec);
    tSortMerge(this->_vec, 0, this->_vec.size() - 1);

    clock_gettime(CLOCK_MONOTONIC, &end);

    this->vectorTime = (end.tv_sec - start.tv_sec) * 1e6 + \
	(end.tv_nsec - start.tv_nsec) / 1e3;
}

void	PmergeMe::sortDeque(char **argv){
	struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

	tAddInput(argv, this->_deque);
    tSortMerge(this->_deque, 0, this->_deque.size() - 1);

    clock_gettime(CLOCK_MONOTONIC, &end);

    this->dequeTime = (end.tv_sec - start.tv_sec) * 1e6 + \
	(end.tv_nsec - start.tv_nsec) / 1e3;
}

std::vector<unsigned int> PmergeMe::getVector(void) const{return this->_vec;}
std::deque<unsigned int> PmergeMe::getDeque(void) const {return this->_deque;}