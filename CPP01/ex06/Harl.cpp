#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

int	Harl::get_level(string levels[4], string level) {
    for (int i = 0; i < 4; i++)
	{
        if (levels[i] == level)
            return i;
	}
	return -1;
}

void	Harl::debug(void) {
	cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
    cout << "I really do!" << endl;
}

void	Harl::info(void) {
	cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. ";
    cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void	Harl::warning(void) {
	cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. ";
    cout << "I've been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void) {
	cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level) {
    string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    switch (get_level(levels, level))
    {
        case 0:
            (this->*func[0])();
            break ;
        case 1:
            (this->*func[1])();
            break ;
        case 2:
            (this->*func[2])();
            break ;
        case 3:
            (this->*func[3])();
            break ;
        default:
            cout << "[ Probably complaining about insignificant problems ]" << endl;
    }
}