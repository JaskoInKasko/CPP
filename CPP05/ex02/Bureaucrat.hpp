#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

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
        int getGrade() const;
        int incgrade();
        int decgrade();
        void signForm(AForm& form);
        void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat);

#endif