#pragma once

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal( void );
		AAnimal( const AAnimal &other );
		AAnimal					&operator=( const AAnimal &other );
		virtual					~AAnimal( void );

		virtual void			makeSound( void ) const;
		std::string				getType( void ) const;
		virtual void			createIdea(int index, const std::string& idea) = 0;
   		virtual std::string		getIdea(int index) const = 0;
};