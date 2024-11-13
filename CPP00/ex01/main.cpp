#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
	phonebook pb;
	std::string UserInput;
	std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
	while (std::cin)
	{
		std::cout << "Command: ";
		getline(std::cin, UserInput);
		if (UserInput == "ADD")
			pb.add_new_contact();
		else if (UserInput == "SEARCH")
		 	pb.search_contact();
		else if (UserInput == "EXIT")
		 	break ;
		else
            std::cout << "Invalid command. Please enter ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}