#include "Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        Harl program;
        program.complain(argv[1]);
    }
    else
        std::cout << "Wrong amount of arguments!\nExpected 2" << std::endl;
    return 0;
}