/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:27:20 by elopin            #+#    #+#             */
/*   Updated: 2025/08/25 13:27:21 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(int ac, char **av) {
    std::string name;
    if (ac == 2)
      name = av[1];
    else
      name = "jean";
    std::cout << "\n---------creation\n" << std::endl;
    FragTrap bob(name);

    std::cout << "\n---------action\n" << std::endl;
    bob.highFivesGuys();
    bob.attack("Enemy");

    std::cout << "\n---------destructeur\n" << std::endl;
    return 0;
}

