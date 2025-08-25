#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
  protected:
    std::string type;
  public:
    virtual ~Animal();
    Animal();
    Animal(const std::string& type);

    virtual void makeSound() const;
    std::string getType() const;
};

#endif
