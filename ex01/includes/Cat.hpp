#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain_;

	public:
		Cat( void );
		Cat( const Cat &other );
		Cat				&operator=( const Cat &other );
		virtual			~Cat( void );

		virtual void	makeSound( void ) const; // override n'existe pas en cpp98
		void			createIdea(int index, const std::string& idea);
   		std::string		getIdea(int index) const;
};