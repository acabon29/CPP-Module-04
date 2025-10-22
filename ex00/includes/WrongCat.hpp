#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat &other );
		WrongCat		&operator=( const WrongCat &other );
		virtual			~WrongCat( void );

		virtual void	makeSound( void ) const; // override n'existe pas en cpp98
};