#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool is_signed;
        const int grade_sign;
        const int grade_exec;
    public:
        AForm();
        AForm(const std::string name, const int grade_sign, const int grade_exec);
        AForm(const AForm& copy);
        AForm &operator=(const AForm& assign);
        virtual ~AForm();

        std::string getName() const;
        int getSignGrade();
        int getExecGrade() const;
        int getStatus();
        bool isSigned() const;
        virtual void beSigned(Bureaucrat& bc);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, AForm &AForm);

#endif