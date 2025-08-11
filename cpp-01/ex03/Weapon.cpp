#include "Weapon.hpp"

const std::string& weapon::getType() const {
  return type;
}

void weapon::setType(const std::string &newType) {
  type = newType;
}
