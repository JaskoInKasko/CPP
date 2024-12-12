#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        std::string name;
        AMateria* inventory[4];
        AMateria* unequipped[4];
        int unequippedCount;

    public:
        Character(std::string const & name);
        Character(const Character& copy);
        Character& operator=(const Character& other);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
