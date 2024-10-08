#ifndef Harl_H
# define Harl_H
# include <iostream>

using namespace std;

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		void	complain(string level);
		~Harl();
};

#endif