#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
  std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
  std::cout << "Parameterized constructor called\n";
  try
  {
    if (grade >= 1 && grade <= 150)
      this->grade = grade;
    else if (grade < 1)
      throw ("Bureaucrat::GradeTooHighException\n");
    else
      throw ("Bureaucrat::GradeTooLowException\n");
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
      throw ("Bureaucrat::GradeTooLowException\n");
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
      throw ("Bureaucrat::GradeTooHighException\n");
  }
  catch(std::string error)
  {
      std::cout << error;
  }
  return this->grade;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", " << "bureaucrat grade " << bureaucrat.getGrade();
	return os;
}