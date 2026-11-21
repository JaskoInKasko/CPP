#include "Form.hpp"

Form::Form() : name("invalid Form"), is_signed(0), grade_sign(0), grade_exec(0) {
	std::cout << "Default constructor called\n";
}

Form::Form(const std::string name, const int grade_sign, const int grade_exec)\
 : name(name), is_signed(0), grade_sign(grade_sign), grade_exec(grade_exec) {
  std::cout << "Parameterized constructor called\n";
  try
  {
    if (grade_sign < 1 || grade_exec < 1)
		throw std::string("Form::GradeTooHighException\n");
	else if (grade_sign > 150 || grade_exec > 150)
    	throw std::string("Form::GradeTooLowException\n");
  }
  catch(std::string error)
  {
      std::cout << error;
  }
}

Form::Form(const Form& copy, const int grade_sign, const int grade_exec) : grade_sign(grade_sign), grade_exec(grade_exec) {
  std::cout << "Copy constructor called\n";
  *this = copy;
}

Form& Form::operator=(const Form& assign) {
  std::cout << "Assignment operator called\n";
  if (this != &assign)
    this->is_signed = is_signed;
  return *this;
}

Form::~Form() {
  std::cout << "Destructor called\n";
}



std::string Form::getName() {
  return this->name;
}

int Form::getStatus() {
	return this->is_signed;
}

int Form::getSignGrade() {
  return this->grade_sign;
}

int Form::getExecGrade() {
  return this->grade_exec;
}

void Form::beSigned(Bureaucrat& bc) {
	try
	{
		if (this->getSignGrade() >= bc.getGrade())
			this->is_signed = 1;
		else
			throw std::string("Form::GradeTooLowException.\n");
	}
	catch(std::string error)
	{
		std::cout << error;
	}
}

std::ostream &operator<<(std::ostream &os, Form &Form)
{
	os << Form.getName() << ", is signed " << Form.getStatus() << ", Form SignGrade "\
		<< Form.getSignGrade() << ", Form ExecGrade " << Form.getExecGrade();
	return os;
}