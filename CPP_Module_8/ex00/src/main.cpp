#include "../includes/easyfind.hpp"

template<typename T>
void printList(const std::list<T>& lst) {
    typename std::list<T>::const_iterator it; // Iterator for list of type T
    for (it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " "; // Dereference iterator to access element
    }
    std::cout << std::endl;
}


int main() {
    std::vector<int> vec;
    for (int i = 1; i <= 5; ++i) {
        vec.push_back(i);
    }

    std::list<int> lst;
    for (int i = 1; i <= 5; ++i) {
        lst.push_back(i * 10);
    }

    printList(lst);

    std::deque<int> deq;
    for (int i = 1; i <= 5; ++i) {
        deq.push_back(i * 100);
    }

    int element1 = 5;
    int element2 = 10;
    int element3 = 400;

    std::cout << "Checking vector:" << std::endl;
    easyfind(vec, element1);
    easyfind(vec, element2);

    std::cout << "\nChecking list:" << std::endl;
    easyfind(lst, element1);
    easyfind(lst, element2);

    std::cout << "\nChecking deque:" << std::endl;
    easyfind(deq, element1);
    easyfind(deq, element3);

    return 0;
}