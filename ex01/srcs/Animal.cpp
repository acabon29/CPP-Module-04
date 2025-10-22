#include "Animal.hpp"

Animal::Animal() : type( "Animal" ) {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal( const Animal &other ) : type( other.type ) {
	std::cout << "Anima copy constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

Animal	&Animal::operator=( const Animal &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Pouf !" << std::endl; 
}

std::string	Animal::getType() const { return type; }
