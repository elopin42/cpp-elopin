#include "animal.hpp"

animal::animal() : type("animal"){
  std::cout << "animal constructor called" << std::endl;
}

animal::animal(const std::string& type) : type(type) {
  std::cout << "animal constructor called for " << this->type << std::endl;
}

animal::~animal() {
  std::cout << "animal destructeur called" << std::endl;
}
