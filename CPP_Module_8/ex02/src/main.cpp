#include <iostream>
#include "../includes/MutantStack.hpp"

int main() {
    // Create a MutantStack of integers
    MutantStack<int> mstack;

    // Push some elements onto the stack
    mstack.push(5);
    mstack.push(17);

    // Print the top element
    std::cout << "Top element: " << mstack.top() << std::endl;

    // Remove the top element
    mstack.pop();

    // Print the size of the stack
    std::cout << "Stack size: " << mstack.size() << std::endl;

    // Push more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Use iterators to print all elements
    MutantStack<int>::iterator it = mstack.start();
    MutantStack<int>::iterator ite = mstack.finish();

    std::cout << "Stack elements: ";
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    // Demonstrate copy constructor
    MutantStack<int> mstack_copy(mstack);
    std::cout << "Copied stack elements: ";
    for (MutantStack<int>::iterator it = mstack_copy.start(); it != mstack_copy.finish(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Demonstrate assignment operator
    MutantStack<int> mstack_assigned;
    mstack_assigned = mstack;
    std::cout << "Assigned stack elements: ";
    for (MutantStack<int>::iterator it = mstack_assigned.start(); it != mstack_assigned.finish(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
