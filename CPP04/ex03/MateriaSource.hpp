#ifndef MATERIASROUCE_HPP
# define MATERIASROUCE_HPP

# include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* sources[4];
    
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator=(const MateriaSource& copy);
        ~MateriaSource();
    
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif