#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog( void );
		WrongDog( const WrongDog &other );
		WrongDog		&operator=( const WrongDog &other );
		virtual			~WrongDog( void );

		virtual void	makeSound( void ) const; // override n'existe pas en cpp98
};