#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain( const Brain& other ) {
	for (unsigned long i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain	copy constructor called." << std::endl;
}

Brain::~Brain( void ){
	std::cout << "Brain destructor called." << std::endl;
}

Brain	&Brain::operator=( const Brain& other )
{
	if (this != &other) {
		for (unsigned long i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	} else {
		std::cerr << index  << " : a wrong index" << std::endl;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return ideas[index];
	std::cerr << index  << " : a wrong index" << std::endl;
	return "";
}