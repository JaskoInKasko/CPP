#include "AForm.hpp"

AForm::AForm() : name("invalid AForm"), is_signed(0), grade_sign(0), grade_exec(0) {
	std::cout << "Default constructor called\n";
}

AForm::AForm(const std::string name, const int grade_sign, const int grade_exec)\
 : name(name), is_signed(0), grade_sign(grade_sign), grade_exec(grade_exec) {
  std::cout << "Parameterized constructor called\n";
  try
  {
    if (grade_sign < 1 || grade_exec < 1)
		  throw std::string("AForm::GradeTooHighException\n");
    else if (grade_sign > 150 || grade_exec > 150)
    	throw std::string("AForm::GradeTooLowException\n");
  }
  catch(std::string error)
  {
      std::cout << error;
  }
}

AForm::AForm(const AForm& copy)
    : name(copy.name), is_signed(copy.is_signed),
      grade_sign(copy.grade_sign), grade_exec(copy.grade_exec) {
    std::cout << "Copy constructor called\n";
}

AForm& AForm::operator=(const AForm& assign) {
  std::cout << "Assignment operator called\n";
  if (this != &assign)
    this->is_signed = is_signed;
  return *this;
}

AForm::~AForm() {
  std::cout << "Destructor called\n";
}



std::string AForm::getName() const {
  return this->name;
}

int AForm::getStatus() {
	return this->is_signed;
}

int AForm::getSignGrade() {
  return this->grade_sign;
}

int AForm::getExecGrade() const {
  return this->grade_exec;
}

bool AForm::isSigned() const {
    return this->is_signed;
}

void AForm::beSigned(Bureaucrat& bc) {
	try
	{
		if (this->getSignGrade() >= bc.getGrade())
			this->is_signed = 1;
		else
			throw std::string("AForm::GradeTooLowException.\n");
	}
	catch(std::string error)
	{
		std::cout << error;
	}
}

std::ostream &operator<<(std::ostream &os, AForm &AForm)
{
	os << AForm.getName() << ", is signed " << AForm.getStatus() << ", AForm SignGrade "\
		<< AForm.getSignGrade() << ", AForm ExecGrade " << AForm.getExecGrade();
	return os;
}