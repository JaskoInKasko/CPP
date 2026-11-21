#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("Person1", 1);

    std::cout << a.incgrade() << "\n";
    std::cout << a << "\n";
}