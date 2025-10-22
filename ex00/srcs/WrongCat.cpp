#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal( other ) {
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongCat::makeSound( void ) const {
	std::cout << "Pif Pouf !" << std::endl;
}