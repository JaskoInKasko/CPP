#include "sed.hpp"

Sed::Sed(char *file, std::string s1, std::string s2) {
    this->file = file;
    this->s1 = s1;
    this->s2 = s2;
}

Sed::~Sed() {}

void    Sed::add_file_input() {
    std::ofstream file;

    file.open(this->file);
    if (!file.is_open())
    {
        std::cout << "Failed to open " << this->file << std::endl;
        return ;
    }
    file << this->content;
    file.close();
    return ;
}

void    Sed::replace_file_input(std::ifstream &file) {
    std::string  content;
    std::string  line;
    size_t  pos = 0;

    while (getline(file, line))
        content += line + "\n";
    if (!content.empty() && content[content.size() - 1] == '\n')
        content.resize(content.size() - 1);
    pos = content.find(s1, pos);
    while (pos != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
        pos = content.find(s1, pos);
    }
    this->content = content;
    return ;
}

void    Sed::start_program() {
    std::ifstream    file;

    if (s1.length() == 0)
        return ;
    file.open(this->file);
    if (!file.is_open())
    {
        std::cout << "Failed to open " << this->file << std::endl;
        return ;
    }
    replace_file_input(file);
    file.close();
    add_file_input();
    return ;
}
