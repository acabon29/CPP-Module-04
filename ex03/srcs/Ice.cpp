#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "Ice" ) {}
Ice::Ice( const Ice& other ) : AMateria( other.type ) {}
Ice::~Ice( void ) {}

Ice	&Ice::operator=( const Ice& other ) {
	(void)other;
	std::cerr << "Use clone constructor" << std::endl;
	return ( *this );
}

AMateria *Ice::clone( void ) const { return new Ice(); }

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}