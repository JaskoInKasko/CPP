#ifndef SED_HEADER_H
# define SED_HEADER_H
# include <iostream>
# include <fstream>

using std::string;
using std::cout;
using std::endl;

class  Sed {
    private:
        char	*file;
		string	content;
        string	s1;
        string	s2;
    public:
        Sed(char *file, string s1, string s2);
        void	start_program();
		void	replace_file_input(std::ifstream &file);
		void	add_file_input();
        ~Sed();
};

#endif