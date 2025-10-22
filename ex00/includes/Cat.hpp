#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat &other );
		Cat				&operator=( const Cat &other );
		virtual			~Cat( void );

		virtual void	makeSound( void ) const; // override n'existe pas en cpp98
};