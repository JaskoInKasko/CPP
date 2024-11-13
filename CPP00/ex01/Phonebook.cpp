#include "Phonebook.hpp"
#include <limits>

void phonebook::add_new_contact()
{
    std::string first_name, last_name, nickname, phone_number, secret;
    std::cout << "first name: ";
    getline(std::cin, first_name);
    for (size_t i = 0; i < first_name.length(); ++i)
    {
        if (!(first_name[i] >= 0 && first_name[i] <= 126)) {
            std::cout << "Error: Contact fields contains invalid characters." << std::endl;
            return ;
        }
    }
    std::cout << "last name: ";
    getline(std::cin, last_name);
    for (size_t i = 0; i < last_name.length(); ++i)
    {
        if (!(last_name[i] >= 0 && last_name[i] <= 126)) {
            std::cout << "Error: Contact fields contains invalid characters." << std::endl;
            return ;
        }
    }
    std::cout << "nickname: ";
    getline(std::cin, nickname);
    for (size_t i = 0; i < nickname.length(); ++i)
    {
        if (!(nickname[i] >= 0 && nickname[i] <= 126)) {
            std::cout << "Error: Contact fields contains invalid characters." << std::endl;
            return ;
        }
    }
    std::cout << "phone number: ";
    getline(std::cin, phone_number);
    for (size_t i = 0; i < first_name.length(); ++i)
    {
        if (!(phone_number[i] >= 0 && phone_number[i] <= 126)) {
            std::cout << "Error: Contact fields contains invalid characters." << std::endl;
            return ;
        }
    }
    std::cout << "darkest secret: ";
    getline(std::cin, secret);
    for (size_t i = 0; i < secret.length(); ++i)
    {
        if (!(secret[i] >= 0 && secret[i] <= 126)) {
            std::cout << "Error: Contact fields contains invalid characters." << std::endl;
            return ;
        }
    }
    if (!first_name.empty() && !last_name.empty() && !nickname.empty()
        && !phone_number.empty() && !secret.empty())
    {
        contacts[current_index].set_contact(first_name, last_name, nickname, phone_number, secret);
        current_index = current_index + 1;
        if (current_index == 8)
            current_index = 0;
        if (total_contacts < 8)
           total_contacts++;
    }
    else
        std::cout << "Error: Contact fields cannot be empty." << std::endl;
}

void phonebook::search_contact()
{
    if (total_contacts == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
            return ;
    }
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < total_contacts; i++)
	    contacts[i].display_short(i);
    std::cout << "Enter index to view details: ";
    int index = -1;
    if (!(std::cin >> index))
    {
        std::cin.clear();
        char ch;
        while (std::cin.get(ch) && ch != '\n');
        std::cout << "Invalid characters found" << std::endl;
        return ;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (index >= 0 && index < total_contacts)
        contacts[index].display_full();
    else
        std::cout << "Invalid index." << std::endl;
}