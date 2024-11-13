#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& copy);
        WrongCat &operator=(const WrongCat& assign);
        ~WrongCat();

        std::string const getType() const;
        void makeSound() const;
};

#endif