#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type( "AAnimal" ) {
	std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal( const AAnimal &other ) : type( other.type ) {
	std::cout << "Anima copy constructor called." << std::endl;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal	&AAnimal::operator=( const AAnimal &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void AAnimal::makeSound( void ) const {
	std::cout << "Pouf !" << std::endl; 
}

std::string	AAnimal::getType( void ) const { return type; }
