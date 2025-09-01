#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat {
  private :
    const std::string name;
    int grade;
  public:
    ~Bureaucrat();
    Bureaucrat();
    Bureaucrat(const std::string name);
    Bureaucrat& operator=(const Bureaucrat& other);
}
