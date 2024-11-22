#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& copy);
        Brain &operator=(const Brain& assign);
        virtual ~Brain();

        void setIdea(std::string _idea, int i);
        std::string getIdea(int i);
};

#endif
