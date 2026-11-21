#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout << "Default constructor called\n";
}

Intern::~Intern() {
  std::cout << "Destructor called\n";
}

AForm* Intern::makeForm(std::string formName, std::string target) {
	std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm* forms[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    for (int i = 0; i < 3; ++i) {
        if (formName == names[i]) {
            std::cout << "Intern creates " << formName << "\n";
            for (int j = 0; j < 3; ++j)
                if (i != j) delete forms[j];

            return forms[i];
        }
    }
    std::cout << "Intern couldn't find a form named '" << formName << "'.\n";
    for (int i = 0; i < 3; ++i)
        delete forms[i];

    return 0;
}