#include "spe.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const{
  std::cout << "waf waf" << std::endl;
}

Cat::Cat() : Animal("cat") {
  std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const{
  std::cout << "miaou miaou" << std::endl;
}
