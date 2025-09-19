/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:27:44 by elopin            #+#    #+#             */
/*   Updated: 2025/09/19 16:27:45 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::FormEntry Intern::forms[3] = {
    {"robotomy request", &Intern::createRobotomy},
    {"shrubbery creation", &Intern::createShrubbery},
    {"presidential pardon", &Intern::createPardon}
};

AForm* Intern::createRobotomy(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createPardon(const std::string& target) {
    return new PresidentialPardonForm(target);
}

Intern::Intern() { std::cout << "Intern Form default constructor called" << std::endl; }
Intern::~Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern &Intern::operator=(const Intern &other) { (void)other; return *this; }

const char* Intern::FormNotExist::what() const throw() {
    return "Intern can't create form because it doesn't exist";
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    int i = 0;
    int size = sizeof(forms) / sizeof(forms[0]);

    while (i < size) {
        if (forms[i].name == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i].createFunc(target);
        }
        i++;
    }

    std::cout << "Error: form \"" << formName << "\" does not exist" << std::endl;
    return NULL;
}
