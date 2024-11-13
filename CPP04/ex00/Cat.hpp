#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat& copy);
        Cat &operator=(const Cat& assign);
        ~Cat();

        void makeSound() const;
};

#endif