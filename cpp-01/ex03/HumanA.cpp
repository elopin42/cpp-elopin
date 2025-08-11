#include "HumanA.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

HumanA::HumanA(const std::string &name, Weapon &Weapon)
  : name(name), weapon(weapon) {}

  void HumanA::attack() const {
    std::cout << name << "attacks with their " << weapon.getType() <<std::endl;
  }
