#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {}
Cure::Cure( const Cure& other ) : AMateria( other.type ) {}
Cure::~Cure( void ) {}

Cure &Cure::operator=( const Cure& other ) {
	(void)other;
	std::cerr << "Use clone constructor" << std::endl;
	return ( *this );
}

AMateria *Cure::clone( void ) const { return new Cure(); }

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wound *" << std::endl;
}