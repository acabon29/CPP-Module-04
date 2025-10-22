#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
        static const        int sizeInventory_ = 4;
		std::string	name;
		AMateria*	inventory[4];
	
	public:
		Character( std::string const & name );
		Character( const Character& other );
		Character&	                operator=( const Character& other );
		virtual                     ~Character( void );

		virtual std::string const&	getName( void ) const;
		virtual void				equip( AMateria* m );
		virtual void				unequip( int idx );
		virtual void				use( int idx, ICharacter& target );
};