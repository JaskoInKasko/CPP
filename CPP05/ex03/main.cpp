#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    // Bureaucrat a("Person1", 5);
    // Form b("Form1", 3, 4);
    // ShrubberyCreationForm c("target1");
    // RobotomyRequestForm d("target2");
    // PresidentialPardonForm e("target3");
    Intern Intern1;
    AForm* rrf;

    rrf = Intern1.makeForm("robotomy request", "Bender");
    // c.beSigned(a);
    // c.execute(a);
    // d.beSigned(a);
    // d.execute(a);
    // e.beSigned(a);
    // e.execute(a);
    // a.executeForm(e);
    // std::cout << a.incgrade() << "\n";
    // std::cout << b << "\n";
    // b.beSigned(a);
    // std::cout << b << "\n";
    // a.signForm(b);

    if (rrf) {
        std::cout << *rrf << "\n";
        delete rrf;
    }

    AForm* unknownForm = Intern1.makeForm("unknown form", "Target");
    if (unknownForm) {
        delete unknownForm;
    }

}