#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog &other );
		Dog				&operator=( const Dog &other );
		virtual			~Dog( void );

		virtual void	makeSound( void ) const; // override n'existe pas en cpp98
};