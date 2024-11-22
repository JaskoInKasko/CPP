#include "Phonebook.hpp"

bool isOnlySpaces(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isspace(str[i]))
            return false;
    }
    return true ;
}

bool invalidSpaces(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (str[i] == ' ')
        {
            if (i != 0 && str[i - 1] == ' ')
                return true ;
            else if (i == 0 || i == str.length() - 1)
            {
                if (str[i] == ' ')
                    return true ;
            }
        }
    }
    return false ;
}

bool contactInputHandling(const std::string& str)
{
    if (str.empty() || isOnlySpaces(str))
    {
        std::cout << "Error: Contact fields cannot be empty." << std::endl;
        return true ;
    }
    else if (invalidSpaces(str))
    {
        std::cout << "Error: Invalid space" << std::endl;
        return true ;
    }
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!(str[i] >= 0 && str[i] <= 126)) {
            std::cout << "Error: Contact fields contains invalid characters." << std::endl;
            return true ;
        }
    }
    return false ;
}

void phonebook::add_new_contact()
{
    std::string first_name, last_name, nickname, phone_number, secret;
    std::cout << "first name: ";
    getline(std::cin, first_name);
    if (contactInputHandling(first_name))
        return ;
    std::cout << "last name: ";
    getline(std::cin, last_name);
    if (contactInputHandling(last_name))
        return ;
    std::cout << "nickname: ";
    getline(std::cin, nickname);
    if (contactInputHandling(nickname))
        return ;
    std::cout << "phone number: ";
    getline(std::cin, phone_number);
    if (contactInputHandling(phone_number))
        return ;
    std::cout << "darkest secret: ";
    getline(std::cin, secret);
    if (contactInputHandling(secret))
        return ;
    contacts[current_index].set_contact(first_name, last_name, nickname, phone_number, secret);
    current_index = current_index + 1;
    if (current_index == 8)
        current_index = 0;
    if (total_contacts < 8)
       total_contacts++;
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
    std::string input;
    std::getline(std::cin, input);
    int index = 0;
    bool isValid = true;
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            isValid = false;
            break ;
        }
        if (index == 0 && i == 1)
        {
            std::cout << "Invalid index." << std::endl;
            return ;
        }
        index = index * 10 + (input[i] - '0');
    }
    if (!isValid || input.empty()) {
        std::cout << "Invalid characters found." << std::endl;
        return;
    }
    if (index >= 0 && index < total_contacts)
        contacts[index].display_full();
    else
        std::cout << "Invalid index." << std::endl;
}