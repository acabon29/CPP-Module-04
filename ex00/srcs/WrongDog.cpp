#include "WrongDog.hpp"

WrongDog::WrongDog() {
	type = "WrongDog";
	std::cout << "WrongDog constructor called." << std::endl;
}

WrongDog::WrongDog( const WrongDog &other ) : WrongAnimal( other ) {
	std::cout << "WrongDog copy constructor called." << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called." << std::endl;
}

WrongDog	&WrongDog::operator=( const WrongDog &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongDog::makeSound() const {
	std::cout << "Paf Pouf !" << std::endl;
}