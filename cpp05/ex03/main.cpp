/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:27:11 by elopin            #+#    #+#             */
/*   Updated: 2025/09/19 16:27:12 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bob("Bob", 50);      // grade correct pour Shrubbery
        Bureaucrat alice("Alice", 1);   // grade très élevé pour tout
        Bureaucrat jim("Jim", 150);     // trop faible pour exécuter

        std::cout << "\n--- SHRUBBERY CREATION FORM ---\n";
        ShrubberyCreationForm shrub("home");
        bob.signForm(shrub);
        bob.executeForm(shrub); // doit créer home_shrubbery

        std::cout << "\n--- ROBOTOMY REQUEST FORM ---\n";
        RobotomyRequestForm robo("Marvin");
        alice.signForm(robo);
        // test plusieurs exécutions pour voir succès/échec 50%
        for (int i = 0; i < 5; ++i)
            alice.executeForm(robo);

        std::cout << "\n--- PRESIDENTIAL PARDON FORM ---\n";
        PresidentialPardonForm pardon("Trillian");
        alice.signForm(pardon);
        alice.executeForm(pardon);

        // test d'un échec (Jim trop faible)
        std::cout << "\n--- TEST FAILURE ---\n";
        jim.executeForm(shrub); // doit afficher erreur
    }
    catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
