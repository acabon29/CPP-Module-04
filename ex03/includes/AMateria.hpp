#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string	type;
    public:
        AMateria(std::string const & type);
        AMateria( const AMateria& other );
        AMateria            &operator=( const AMateria& other );
		virtual             ~AMateria( void );

        std::string const   &getType( void ) const; //Returns the materia type
        virtual AMateria    *clone( void ) const = 0;
        virtual void        use(ICharacter& target);
};