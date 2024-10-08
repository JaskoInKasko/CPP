#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}


void	Harl::debug(void) {
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
    cout << "I really do!" << endl;
}

void	Harl::info(void) {
	cout << "I cannot believe adding extra bacon costs more money. ";
    cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void	Harl::warning(void) {
	cout << "I think I deserve to have some extra bacon for free. ";
    cout << "I've been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void) {
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level) {
    string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            (this->*func[i])();
    }
}