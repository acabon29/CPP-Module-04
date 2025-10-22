#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &other );
		WrongAnimal	&operator=( const WrongAnimal &other );
		virtual		~WrongAnimal( void );

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};