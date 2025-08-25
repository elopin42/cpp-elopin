#include "spe.hpp"

Dog::Dog() : animal("Dog") {
  std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog destructor" << std::endl;
}

void Dog::makesound() const{
  std::cout << "waf waf" << std::endl;
}

Cat::Cat() : animal("cat") {
  std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat destructor" << std::endl;
}

void Cat::makesound() const{
  std::cout << "miaou miaou" << std::endl;
}
