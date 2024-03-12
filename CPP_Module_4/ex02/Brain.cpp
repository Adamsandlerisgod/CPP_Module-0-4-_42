#include "Brain.hpp"
// Default constructor
Brain::Brain() {
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++){
        this->ideas[i] = "Love";
	}
	std::cout << "Brain Default Constructor called" << std::endl;
	// std::cout << "Must be Love on the Brain!" << std::endl;
}
// Copy constructor
Brain::Brain(const Brain& other) {
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy constructor called" << std::endl;
}

// Copy assignment operator
Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain Copy Assignment operator called" << std::endl;
    if (this != &other) {
        delete[] this->ideas;
        this->ideas = new std::string[100];
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

// Destructor

Brain::~Brain() {
    delete [] this->ideas;
	std::cout << "Destructor called" << std::endl;
}

std::string* Brain::getIdeas(void) const
{
    return(this->ideas);
}

Brain*  Brain::clone(void) const
{
    return(new Brain(*this));
}

// #include "Brain.hpp"
// // Default constructor
// Brain::Brain() {
//     this->ideas = new std::string[100];
//     for (int i = 0; i < 100; i++)
//         this->ideas[i] = "Love";
// 	std::cout << "Brain default constructor called" << std::endl;
// }
// // Copy constructor
// Brain::Brain(const Brain& other) {
//     std::string *ideas = other.getIdeas();
//     this->ideas = new std::string[100];
//     for (int i = 0; i < 100; i++)
//         this->ideas[i] = ideas[i];
// 	std::cout << "Brain Copy constructor called" << std::endl;
// }
// // Copy assignment operator
// Brain& Brain::operator=(const Brain& other) {
// 	std::cout << "Brain Copy Assignment operator called" << std::endl;
//    for (int i = 0; i < 100; i++)
//         this->ideas[i] = other.ideas[i];
//     return *this;
// }
// // Destructor
// Brain::~Brain() {
//     delete [] this->ideas;
// 	std::cout << "Destructor called" << std::endl;
// }

// std::string* Brain::getIdeas(void) const
// {
//     return(this->ideas);
// }

// Brain*  Brain::clone(void) const
// {
//     return(new Brain(*this));
// }
