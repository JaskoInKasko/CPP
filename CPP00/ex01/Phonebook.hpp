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

        void add_new_contact();
        void search_contact();
};

#endif