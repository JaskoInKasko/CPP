#include "Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        Harl program;
        program.complain(argv[1]);
    }
    else
        cout << "Wring amount of arguments!\nExpected 2" << endl;
    return 0;
}