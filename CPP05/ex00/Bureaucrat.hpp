#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat &operator=(const Bureaucrat& assign);
        ~Bureaucrat();

        std::string getName();
        int getGrade();
        int incgrade();
        int decgrade();
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat);

#endif