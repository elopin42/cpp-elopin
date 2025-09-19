#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(50) {
  std::cout << "Bureaucrat constructor called" << std::endl;
} 

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
  std::cout << "Bureaucrat copy assignment called for " << this->name << std::endl;
  if (this != &other) {
    this->grade = other.grade;
  }
  return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade){
  std::cout << "Bureaucrat constructor called for " << this->name << std::endl;
  validateGrade(grade);
} 

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called for " << this->name << std::endl;
}

int Bureaucrat::getGrade() const{
  return grade;
}

const std::string& Bureaucrat::getName() const {
  return name;
}

void Bureaucrat::validateGrade(int g) const {
  if (g > 150)
    throw GradeTooLowException();
  if (g < 1)
    throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
  validateGrade(grade + 1);
  grade++;
}

void Bureaucrat::incrementGrade() {
  validateGrade(grade - 1);
  grade--;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}

void Bureaucrat::signForm(AForm& f) const {
    try {
        f.beSigned(*this);
        std::cout << name << " signed " << f.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << name << " couldn’t sign " << f.getName()
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const {
  try {
    form.execute(*this);
    std::cout << name << " execute " << form.getName() << std::endl;
  } catch (std::exception & e) {
    std::cout << name << "couldn't execute " << form.getName() << " because " << e.what() << std::endl;
  }
}
