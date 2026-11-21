#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("PresidentialPardonForm", 25, 5), target(target)  {
	std::cout << "Parameterized constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: AForm(copy), target(copy.target) {
	std::cout << "Copy constructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& assign) {
	std::cout << "Assignment operator called\n";
	if (this != &assign)
	  this->target = target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called\n";
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->isSigned())
		throw std::runtime_error("Form is not signed");
	if (executor.getGrade() > this->getExecGrade())
		throw std::runtime_error("Bureaucrat grade too low to execute the form.");
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}