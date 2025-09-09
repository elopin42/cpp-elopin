#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"){
  std::cout << "Bureaucrat constructor called" << std::endl;
} 

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
  std::cout << "Bureaucrat copy assignment called for " << this->name << std::endl;
  if (this != &other) {
    Bureaucrat::operator=(other);
  }
  return *this;
}

Bureaucrat::Bureaucrat(const std::string& name) : name(name){
  std::cout << "Bureaucrat constructor called for " << this->name << std::endl;
} 

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

