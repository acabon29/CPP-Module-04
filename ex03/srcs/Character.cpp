#include "Character.hpp"

Character::Character( std::string const &name ) {
	this->name = name;
	for (int i = 0; i < sizeInventory_; ++i)
		inventory[i] = NULL;
}

Character::Character( const Character &other ) {
	this->name = other.name;
	for (int i = 0; i < sizeInventory_; ++i) {
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character::~Character( void ) {
	for (int i = 0; i < sizeInventory_; ++i)
		delete inventory[i];
}

Character &Character::operator=( const Character& other ) {
	if (this != &other) {
		this->name = other.name;
		for (int i = 0; i < sizeInventory_; ++i) {
			if (inventory[i])
				delete inventory[i];
            if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
		}
	}
	return ( *this );
}

std::string const &Character::getName( void ) const { return name; }

void Character::equip( AMateria* Materia ) {
	if (Materia) {
		for (int i = 0; i < sizeInventory_; ++i) {
			if (!inventory[i]) {
				inventory[i] = Materia;
				break;
			}
		}
	}
}

void Character::unequip( int idMateria ) {
	if (idMateria >= 0 && idMateria <= 3)
		inventory[idMateria] = NULL;
}

void Character::use( int idMateria, ICharacter& target ) {
	if (idMateria >= 0 && idMateria <= 3 && inventory[idMateria]) 
		inventory[idMateria]->use(target);
}