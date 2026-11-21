#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {
	std::cout << "Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target)  {
	std::cout << "Parameterized constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
	: AForm(copy), target(copy.target) {
	std::cout << "Copy constructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& assign) {
	std::cout << "Assignment operator called\n";
	if (this != &assign)
	  this->target = target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	try
	{
		if (!this->isSigned())
			throw std::runtime_error("Form is not signed.");
		if (executor.getGrade() > this->getExecGrade())
			throw std::runtime_error("Bureaucrat grade too low to execute the form.");
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::ofstream file((target + "_shrubbery").c_str());
	try
	{
		if (!file.is_open())
			throw std::runtime_error("Failed to open file.");
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return ;
	}
	file << "     /\\\n";
	file << "    /**\\\n";
	file << "   /****\\\n";
	file << "  /******\\\n";
	file << " /********\\\n";
	file << "/**********\\\n";
	file << "     ||\n";
	file << "     ||\n";
	file.close();
}