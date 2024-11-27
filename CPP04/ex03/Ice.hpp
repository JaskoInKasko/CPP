#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp" 

class Ice : public AMateria {
    public:
        AMateria* clone() const;
};

#endif