#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& copy);
        WrongCat &operator=(const WrongCat& assign);
        ~WrongCat();

        void makeSound() const;
};

#endif