#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    Animal const *animals[100];
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        animals[i]->makeSound();
        std::cout << i << std::endl;
    }
    for (int i = 0; i < 100; i++)
        delete animals[i];
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();

    // delete i;
    // delete j;
    // delete meta;

    // const WrongAnimal* wrongMeta = new WrongAnimal();
    // const WrongAnimal* wrongCat = new WrongCat();

    // std::cout << wrongCat->getType() << " " << std::endl;
    // wrongCat->makeSound();

    // delete wrongCat;
    // delete wrongMeta;

    return 0;
}