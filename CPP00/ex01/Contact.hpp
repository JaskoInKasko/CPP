#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		void print_field(const std::string &field) const;
	public:
		contact() {}

		void set_contact(std::string first_name, std::string last_name, std::string nickname,
			std::string phone_number, std::string darkest_secret);
		void display_short(int index) const;
		void display_full();
};

#endif