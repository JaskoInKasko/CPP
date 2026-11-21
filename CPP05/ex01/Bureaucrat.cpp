#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Some Name"), grade(0) {
	std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat( std::string name, int grade) : name(name) {
  std::cout << "Parameterized constructor called\n";
  try
  {
    if (grade >= 1 && grade <= 150)
      this->grade = grade;
    else if (grade < 1)
      throw std::string("Bureaucrat::GradeTooHighException\n");
    else
      throw std::string("Bureaucrat::GradeTooLowException\n");
  }
  catch(std::string error)
  {
      std::cout << error;
  }
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) {
  std::cout << "Copy constructor called\n";
  *this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& assign) {
  std::cout << "Assignment operator called\n";
  if (this != &assign)
    this->grade = grade;
  return *this;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Destructor called\n";
}



std::string Bureaucrat::getName() {
  return this->name;
}

int Bureaucrat::getGrade() {
  return this->grade;
}



int Bureaucrat::incgrade() {
  try
  {
    if (this->grade > 1)
      this->grade--;
    else
      throw std::string("Bureaucrat::GradeTooHighException\n");
  }
  catch(std::string error)
  {
      std::cout << error;
  }
  return this->grade;
}

int Bureaucrat::decgrade() {
  try
  {
    if (this->grade < 150)
      this->grade++;
    else
      throw std::string("Bureaucrat::GradeTooLowException\n");
  }
  catch(std::string error)
  {
      std::cout << error;
  }
  return this->grade;
}

void Bureaucrat::signForm(Form& form) {
  if (form.getStatus() == 1)
    std::cout << this->name << " signed " << form.getName() << "\n";
  else
    std::cout << this->name << " couldn't signed " << form.getName() << " because his grade is to low\n";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", " << "bureaucrat grade " << bureaucrat.getGrade();
	return os;
}