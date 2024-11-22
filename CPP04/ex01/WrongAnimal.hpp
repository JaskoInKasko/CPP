#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal &operator=(const WrongAnimal& assign);
        virtual ~WrongAnimal();

        virtual std::string const getType() const;
        virtual void makeSound() const;
};

#endif