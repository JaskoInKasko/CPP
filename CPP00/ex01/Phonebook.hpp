#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class phonebook {
    private:
        contact contacts[8];
        int current_index;
        int total_contacts;

    public:
        phonebook() : current_index(0), total_contacts(0) {}

        void add_new_contact()
        {
            std::string first_name, last_name, nickname, phone_number, secret;
            std::cout << "first name: ";
            getline(std::cin, first_name);
            std::cout << "last name: ";
            getline(std::cin, last_name);
            std::cout << "nickname: ";
            getline(std::cin, nickname);
            std::cout << "phone number: ";
            getline(std::cin, phone_number);
            std::cout << "darkest secret: ";
            getline(std::cin, secret);
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
        void search_contact()
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
            std::cin >> index;
            std::cin.ignore();
            if (index >= 0 && index < total_contacts)
                contacts[index].display_full();
            else
                std::cout << "Invalid index." << std::endl;
        }
};

#endif