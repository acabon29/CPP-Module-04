#pragma once

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
	private:
        static const        int sizeInventory_ = 4;
		AMateria            *materias_[sizeInventory_];


	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &other );
		MateriaSource	    &operator=( const MateriaSource &other );
		virtual             ~MateriaSource( void );

		virtual void		learnMateria( AMateria* m );
		virtual AMateria*	createMateria( std::string const &type);
};