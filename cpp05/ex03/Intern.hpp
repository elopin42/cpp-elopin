#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Intern {
private:
    struct FormEntry {
        std::string name;
        AForm* (*createFunc)(const std::string& target);
    };

    static FormEntry forms[3];

    static AForm* createRobotomy(const std::string& target);
    static AForm* createShrubbery(const std::string& target);
    static AForm* createPardon(const std::string& target);

public:
    Intern();
    ~Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);

    class FormNotExist : public std::exception {
        const char* what() const throw();
    };

    AForm* makeForm(const std::string& formName, const std::string& target);
};

#endif
