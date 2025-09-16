
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;

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

    Form();                                      
    Form(const Form& other);                    
    Form& operator=(const Form& other);         
    ~Form();                                    

    Form(const std::string& name, const int gts, const int gte);

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
