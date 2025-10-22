#include "Cat.hpp"

Cat::Cat( void ) {
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat( const Cat &other ) : Animal( other ) {
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called." << std::endl;
}

Cat	&Cat::operator=( const Cat &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << "Miaou !" << std::endl;
}