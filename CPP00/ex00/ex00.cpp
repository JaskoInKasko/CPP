#include <iostream>

int main(int argc, char *argv[])
{
    if (argc >= 2)
    {
        for (int i = 1; argv[i]; i++)
        {
            for (long unsigned int ic = 0; argv[i][ic] != '\0'; ic++)
            {
                if (argv[i][ic] != '"')
                    std::cout << (char)std::toupper(argv[i][ic]);
                else
                    ic++;
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}