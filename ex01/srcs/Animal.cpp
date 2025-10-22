#include "Animal.hpp"

Animal::Animal( void ) : type( "Animal" ) {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal( const Animal &other ) : type( other.type ) {
	std::cout << "Anima copy constructor called." << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called." << std::endl;
}

Animal	&Animal::operator=( const Animal &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Animal::makeSound( void ) const {
	std::cout << "Pouf !" << std::endl; 
}

std::string	Animal::getType( void ) const { return type; }
