#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria 
{
	public:
		Cure( void );
		Cure( const Cure& other );
		Cure	            &operator=( const Cure& other );
		virtual             ~Cure( void );

		virtual AMateria*	clone( void ) const;
		virtual void		use( ICharacter& target );
};