#include "animal.hpp"

Animal::Animal() : type("Animal"){
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
  std::cout << "Animal constructor called for " << this->type << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal destructeur called" << std::endl;
}

void Animal::makeSound() const {
  std::cout << "Animal default sound" << std::endl;
} 

std::string Animal::getType() const {
  return type;
}
