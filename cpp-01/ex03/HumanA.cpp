#include "HumanA.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

HumanA::HumanA(const std::string &name, Weapon &weapon)
  : name(name), weapon(weapon) {}

  void HumanA::attack() const {
    std::cout << name << " attacks with a " << weapon.getType() <<std::endl;
  }
