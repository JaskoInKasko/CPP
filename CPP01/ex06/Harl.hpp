#ifndef Harl_H
# define Harl_H
# include <iostream>

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		void	complain(std::string level);
		int		get_level(std::string levels[4], std::string level);
		~Harl();
};

#endif