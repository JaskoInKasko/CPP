#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("RobotomyRequestForm", 72, 45), target(target)  {
	std::cout << "Parameterized constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
	: AForm(copy), target(copy.target) {
	std::cout << "Copy constructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& assign) {
	std::cout << "Assignment operator called\n";
	if (this != &assign)
	  this->target = target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	try {
		if (!this->isSigned())
			throw std::runtime_error("Form is not signed");
		if (executor.getGrade() > this->getExecGrade())
			throw std::runtime_error("Bureaucrat grade too low to execute the form.");
	}
	catch(std::exception &e) {
		std::cerr << "Error: " << e.what() << "\n";
		return ;
	}
	std::cout << "*Drill drill!!!*\n";

	static bool seeded = false;
	if (!seeded)
	{
		std::srand(std::time(NULL));
		seeded = true;
	}
	if (std::rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully! 🤖✨\n";
    else
        std::cout << "Robotomy failed. 😵‍💫\n";
}