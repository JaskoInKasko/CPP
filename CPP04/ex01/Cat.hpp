#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat& copy);
        Cat &operator=(const Cat& assign);
        ~Cat();

        void makeSound() const;
        void setIdea(std::string _idea, int i);
        std::string getIdea(int i);
};

#endif