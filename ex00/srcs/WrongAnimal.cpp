#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "WrongAnimal" ) {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ) : type( other.type ) {
	std::cout << "Anima copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "Bip Bip !" << std::endl; 
}

std::string	WrongAnimal::getType( void ) const { return type; }