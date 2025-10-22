#include "Dog.hpp"

Dog::Dog( void ) {
	type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
	brain_ = new Brain();
}

Dog::Dog( const Dog &other ) : Animal( other ) {
	std::cout << "Dog copy constructor called." << std::endl;
	brain_ = new Brain();
}

Dog::~Dog( void ) {
	delete brain_;
	std::cout << "Dog destructor called." << std::endl;
}

Dog	&Dog::operator=( const Dog &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << "Woof !" << std::endl;
}

void Dog::createIdea(int index, const std::string& idea) { brain_->setIdea(index, idea); }
std::string Dog::getIdea(int index) const { return brain_->getIdea(index); }