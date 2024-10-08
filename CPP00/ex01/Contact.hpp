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

	public:
		contact() {}

		void set_contact(std::string first_name, std::string last_name, std::string nickname,
			std::string phone_number, std::string darkest_secret)
		{
			this->first_name = first_name;
			this->last_name = last_name;
			this->nickname = nickname;
			this->phone_number = phone_number;
			this->darkest_secret = darkest_secret;	
		}
		void display_short(int index) const
		{
		    std::cout.width(10);
		    std::cout << index << '|';
		    print_field(first_name);
		    std::cout << '|';
		    print_field(last_name);
		    std::cout << '|';
		    print_field(nickname);
		    std::cout << std::endl;
    	}
		void display_full() {
        	std::cout << "First name: " << first_name << std::endl;
        	std::cout << "Last name: " << last_name << std::endl;
        	std::cout << "Nickname: " << nickname << std::endl;
        	std::cout << "Phone number: " << phone_number << std::endl;
        	std::cout << "Darkest secret: " << darkest_secret << std::endl;
		}
	private:
    	void print_field(const std::string &field) const
		{
    	    if (field.length() > 10)
    	        std::cout << field.substr(0, 9) + ".";
    	    else
    	        std::cout.width(10), std::cout << field;
		}
};

#endif