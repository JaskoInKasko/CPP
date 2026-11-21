#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& assign);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &output, ShrubberyCreationForm &ShrubberyCreationForm);

#endif