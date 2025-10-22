#pragma once

#include <iostream>
#include <string>

class AMateria; // declarer pour eviter des erreurs

class ICharacter
{
    public:
        virtual ~ICharacter( void );
        virtual std::string const & getName( void ) const = 0;
        virtual void equip(AMateria* m) = 0; // l'erreur en question
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};
