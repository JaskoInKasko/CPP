#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongCat.hpp"

int main()
{
    Cat* i = new Cat();
    Dog* j = new Dog();

    std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();

    delete i;
    delete j;

    // const WrongAnimal* wrongMeta = new WrongAnimal();
    // const WrongAnimal* wrongCat = new WrongCat();

    // std::cout << wrongCat->getType() << " " << std::endl;
    // wrongCat->makeSound();

    // delete wrongCat;
    // delete wrongMeta;

    return 0;
}