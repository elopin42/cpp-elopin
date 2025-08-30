/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:09:55 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:09:56 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "spe.hpp"

int main(int ac, char **av) {
    int size = 4;
    if (ac == 2)
      size = std::atoi(av[1]);
    Animal* animals[size];

    std::cout << "\n---mi dog | mi cat---\n" <<std::endl;
    for (int i = 0; i < size/2; ++i)
        animals[i] = new Dog();

    for (int i = size/2; i < size; ++i)
        animals[i] = new Cat();

    std::cout << "\n--- test makesound ---\n" <<std::endl;
    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    std::cout << "\n--- delete ---\n" <<std::endl;
    for (int i = 0; i < size; ++i)
        delete animals[i];

    return 0;
}

