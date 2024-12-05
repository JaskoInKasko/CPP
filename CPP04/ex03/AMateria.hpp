#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria {
    protected:
        std::string type;
    public:
    AMateria(std::string const & type);
    AMateria(const AMateria& copy);
    AMateria &operator=(const AMateria& copy);
    ~AMateria();

    std::string const & getType() const;
    virtual AMateria* clone() const = 0; //makes this class an abstract class. Test it with ex02
    virtual void use(ICharacter& target);
};

#endif