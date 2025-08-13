#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}

void HumanB::removetype() {
  this->weapon = NULL;
  std::cout << name << " has remove weapon" << std::endl;
}

