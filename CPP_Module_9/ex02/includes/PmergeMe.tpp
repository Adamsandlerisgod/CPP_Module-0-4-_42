#ifndef PMERGE_ME_TPP
# define PMERGE_ME_TPP

template<typename T>
T	str_to_int(const std::string &stri){
	try{
		std::stringstream ss(stri);
		T res;
		ss >> res;
		if (ss.fail() ||!ss.eof())
			return -std::numeric_limits<float>::infinity();
	return (res);
	}
	catch (std::exception &e){
		return (-1);
	}
}

template<typename T>
void tPrintArray(const T &array) {
    typename T::const_iterator it = array.begin();
    while (it != array.end()) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
}

template<typename T>
void tMerge(T &cont, int begin, int mid, int end) {
    T temp;

	if (cont.at(begin) <= cont.at(mid)){
		std::merge(cont.begin() + mid + 1, cont.begin() + end + 1, \
		cont.begin() + begin, cont.begin() + mid + 1, \
		std::back_inserter(temp));
	}
	else{
		std::merge(cont.begin() + begin, cont.begin() + mid + 1, \
		cont.begin() + mid + 1, cont.begin() + end + 1, \
		std::back_inserter(temp));
	}
    std::copy(temp.begin(), temp.end(), cont.begin() + begin);
}

template<typename T>
void tSortMerge(T &cont, int begin, int end) {
    if (begin < end) {
        int mid = begin + (end - begin) / 2;
        tSortMerge(cont, begin, mid);
        tSortMerge(cont, mid + 1, end);
        tMerge(cont, begin, mid, end);
    }
}

template <typename T>
void	tAddInput(char **argv, T &cont){
	for (size_t i = 1; argv[i]; i++){
		int num = str_to_int<int>(argv[i]);
		cont.push_back(num);
	}
}


#endif