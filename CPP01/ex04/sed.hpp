#ifndef SED_HEADER_H
# define SED_HEADER_H
# include <iostream>
# include <fstream>

class  Sed {
    private:
        char	*file;
		std::string	content;
        std::string	s1;
        std::string	s2;
    public:
        Sed(char *file, std::string s1, std::string s2);
        void	start_program();
		void	replace_file_input(std::ifstream &file);
		void	add_file_input();
        ~Sed();
};

#endif