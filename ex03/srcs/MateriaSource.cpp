#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < sizeInventory_; ++i)
		materias_[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &other ) {
	for (int i = 0; i < sizeInventory_; ++i) {
		if (other.materias_[i])
			this->materias_[i] = other.materias_[i]->clone();
		else
			this->materias_[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=( const MateriaSource &other ) {
	if (this != &other) {
		for (int i = 0; i < sizeInventory_; ++i) {
			if (materias_[i])
				delete materias_[i];
			if (other.materias_[i])
				materias_[i] = other.materias_[i]->clone();
			else
				materias_[i] = NULL;
		}
	}
	return ( *this );
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < sizeInventory_; ++i) {
		delete materias_[i];
		materias_[i] = NULL;
	}
}

void MateriaSource::learnMateria( AMateria *Materia ) {
	if (Materia) {
		for (int i = 0; i < sizeInventory_; ++i) {
			if (!materias_[i]) {
				materias_[i] = Materia; // shallow copy: stores the m pointer in the array
				break;
			}
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const &type) {
	for (int i = 0; i < sizeInventory_; ++i) {
		if (materias_[i] && materias_[i]->getType() == type)
			return materias_[i]->clone();
	}
	return ( NULL );
}