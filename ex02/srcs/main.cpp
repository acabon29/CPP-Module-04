#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"




int main( void )
{
    std::cout <<"-------------------------" << std::endl;
    size_t size = 6;
    AAnimal* animals[size];

    for (size_t i = 0; i < size/2; ++i)
		animals[i] = new Dog();
	for (size_t i = size/2; i < size; ++i)
		animals[i] = new Cat();

    for (size_t i = 0; i < size; i++)
    {
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
    }

    animals[0]->createIdea(0, "miam");
    animals[0]->createIdea(1, "bouh!");
    animals[size/2]->createIdea(0, "truc");
    animals[size/2]->createIdea(1, "bidule!");

    std::cout << animals[0]->getType() << " idee 0 = " << animals[0]->getIdea(0) << std::endl;
    std::cout << animals[0]->getType() << " idee 1 = " << animals[0]->getIdea(1) << std::endl;
    std::cout << animals[0]->getType() << " idee 2 = " << animals[0]->getIdea(2) << std::endl;
    std::cout << animals[size/2]->getType() << " idee 0 = " << animals[size/2]->getIdea(0) << std::endl;
    std::cout << animals[size/2]->getType() << " idee 1 = " << animals[size/2]->getIdea(1) << std::endl;
    std::cout << animals[size/2]->getType() << " idee 2 = " << animals[size/2]->getIdea(2) << std::endl;

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
