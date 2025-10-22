#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"




int main()
{
    std::cout <<"-------------------------" << std::endl;
    size_t size = 6;
    Animal* animals[size];

    for (size_t i = 0; i < size/2; ++i)
		animals[i] = new Dog();
	for (size_t i = size/2; i < size; ++i)
		animals[i] = new Cat();

    for (size_t i = 0; i < size; i++)
    {
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
    }

    for (size_t i = 0; i < size; i++)
        delete animals[i];
    
    std::cout <<"-------------------------" << std::endl;
    // test pour "deep copies"
    Cat chat1;
    chat1.createIdea(0, "idee 1");

    // constructeur de copie :
    Cat chat2 = chat1;
    chat2.createIdea(0, "idee 2");

    // operateur d’affectation :
    Cat chat3;
    chat3 = chat1;
    chat3.createIdea(0, "idee 3");

    std::cout << "chat1 idee = " << chat1.getIdea(0) << std::endl;
    std::cout << "chat2 idee = " << chat2.getIdea(0) << std::endl;
    std::cout << "chat3 idee = " << chat3.getIdea(0) << std::endl;

    std::cout <<"-------------------------" << std::endl;
    return (0);
}
