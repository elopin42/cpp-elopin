#include "animal.hpp"

animal::animal() : type("animal"){
  std::cout << "animal constructor called" << std::endl;
}

animal::animal(const std::string& type) : type(type) {
  std::cout << "animal constructor called for " << this->type << std::endl;
}

animal::makesound(){
  if (this->type == "Dog")
    std::cout << "waf waf" << std::endl;
  else if (this->type = "Cat")
    std::cout << "miaou miaou" << std::endl;
  else
    std::cout << "no type valid assign" << std::endl;
}

animal& animal::operator=(const animal& other) {
  if (this != &other)
    type = other.type;
  return *this;
}

animal::~animal();{
  std::cout << "animal destructeur called" << std::endl;
}
