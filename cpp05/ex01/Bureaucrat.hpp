#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:
    const std::string name;
    int grade;

    void validateGrade(int g) const;

public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade too high";
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade too low";
        }
    };

    Bureaucrat();                                 
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);          
    ~Bureaucrat();                                
    Bureaucrat& operator=(const Bureaucrat& other);
    void signForm(Form& f) const;

    const std::string& getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();


};


std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif // BUREAUCRAT_HPP

