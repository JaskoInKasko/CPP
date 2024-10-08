#include "sed.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		Sed init = Sed(argv[1], argv[2], argv[3]);
		init.start_program();
	}
	else
		cout << "Wrong amount of Arguments!\nExpected 4" << endl;
	return 0;
}