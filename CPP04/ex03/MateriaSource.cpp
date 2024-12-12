#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    // std::cout << "MateriaSource Default constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        sources[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    // std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        if (sources[i])
            sources[i] = copy.sources[i]->clone();
        else
            sources[i] = 0;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
    // std::cout << "MateriaSource assignment operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 4; ++i)
            delete sources[i];
        for (int i = 0; i < 4; ++i)
        {
            if (sources[i])
                sources[i] = copy.sources[i]->clone();
            else
                sources[i] = 0;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    // std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        delete sources[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; ++i)
    {
        if (!sources[i])
        {
            sources[i] = m;
            return;
        }
    }
    delete m; // If no space, avoid memory leak
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i)
    {
        if (sources[i] && sources[i]->getType() == type)
            return sources[i]->clone();
    }
    return 0; // Type not found
}