#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong_Animal") {
  std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type)  {
  std::cout << "WrongAnimal constructor called for " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal(){
  std::cout << "wrong Animal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "generic wrong Animal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
  return type;
}
