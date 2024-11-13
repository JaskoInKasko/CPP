#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

int	Harl::get_level(std::string levels[4], std::string level) {
    for (int i = 0; i < 4; i++)
	{
        if (levels[i] == level)
            return i;
	}
	return -1;
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
    std::cout << "I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
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
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}