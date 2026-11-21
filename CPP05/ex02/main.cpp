#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat a("Person1", 5);
    // Form b("Form1", 3, 4);
    // ShrubberyCreationForm c("target1");
    // RobotomyRequestForm d("target2");
    PresidentialPardonForm e("target3");


    // c.beSigned(a);
    // c.execute(a);
    // d.beSigned(a);
    // d.execute(a);
    e.beSigned(a);
    // e.execute(a);
    a.executeForm(e);
    // std::cout << a.incgrade() << "\n";
    // std::cout << b << "\n";
    // b.beSigned(a);
    // std::cout << b << "\n";
    // a.signForm(b);

}