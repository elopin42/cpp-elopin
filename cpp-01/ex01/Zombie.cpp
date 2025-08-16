/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:33:44 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:33:50 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
}

Zombie::~Zombie() {
    std::cout << this->name << " is delete >>" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << " is create <<" << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

