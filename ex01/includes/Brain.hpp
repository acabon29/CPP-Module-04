#pragma once

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain( void );
		Brain( const Brain &other );
		~Brain( void );
		Brain&operator=( const Brain &other );

		void setIdea(int index, const std::string& idea);
   		std::string getIdea(int index) const;
};