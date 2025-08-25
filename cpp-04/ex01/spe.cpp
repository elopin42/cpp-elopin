#include "spe.hpp"

Dog::Dog() : Animal("Dog") {
  brain = new Brain;
  std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const{
  std::cout << "waf waf" << std::endl;
}

Cat::Cat() : Animal("cat") {
  brain = new Brain;
  std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const{
  std::cout << "miaou miaou" << std::endl;
}
