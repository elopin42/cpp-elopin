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

