#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string var = "HI THIS IS BRAIN";
    string *stringPTR = &var;
    string &stringREF = var;

    cout << "Memory address of var: " << &var << endl;
    cout << "Memory address of stringPTR: " << stringPTR << endl;
    cout << "Memory address of stringREF: " << &stringREF << endl;

    cout << "Value of var: " << var << endl;
    cout << "Value of stringPTR: " << *stringPTR << endl;
    cout << "Value of stringREF: " <<  stringREF << endl;
}