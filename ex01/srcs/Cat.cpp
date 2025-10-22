#include "Cat.hpp"

Cat::Cat( void ) {
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
	brain_ = new Brain();
}

Cat::Cat( const Cat &other ) : Animal( other ) {
	std::cout << "Cat copy constructor called." << std::endl;
	brain_ = new Brain(*(other.brain_));
}

Cat::~Cat( void ) {
	delete brain_;
	std::cout << "Cat destructor called." << std::endl;
}

Cat	&Cat::operator=( const Cat &other ) {
	this->type = other.type;
	if (brain_)
		delete brain_;
	brain_ = new Brain(*(other.brain_));
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << "Miaou !" << std::endl;
}

void Cat::createIdea(int index, const std::string& idea) { brain_->setIdea(index, idea); }
std::string Cat::getIdea(int index) const { return brain_->getIdea(index); }