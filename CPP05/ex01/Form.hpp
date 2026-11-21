#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool is_signed;
        const int grade_sign;
        const int grade_exec;
    public:
        Form();
        Form(const std::string name, const int grade_sign, const int grade_exec);
        Form(const Form& copy, const int grade_sign, const int grade_exec);
        Form &operator=(const Form& assign);
        ~Form();

        std::string getName();
        int getSignGrade();
        int getExecGrade();
        int getStatus();
        void beSigned(Bureaucrat& bc);
};

std::ostream &operator<<(std::ostream &os, Form &Form);

#endif