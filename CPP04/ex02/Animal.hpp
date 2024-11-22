#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {
    protected:
        std::string type;
        Animal();
        Animal(const Animal& copy);
        Animal &operator=(const Animal& assign);
        virtual ~Animal();
    public:
        virtual std::string const getType() const;
        virtual void makeSound() const;
};

#endif