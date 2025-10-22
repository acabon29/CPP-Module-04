#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ) : type(type) {
}
AMateria::AMateria( const AMateria &other ) { this->type = other.type; }
AMateria::~AMateria( void ) {}

AMateria &AMateria::operator=( const AMateria &other ) {
	(void)other;
	std::cerr << "Use clone constructor" << std::endl;
	return ( *this );
}

std::string const &AMateria::getType( void ) const { return ( type ); }
void AMateria::use(ICharacter &target) { (void)target; }
