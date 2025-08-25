#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class animal {
  protected:
    std::string type;
  public:
    ~animal();
    animal();
    animal(const std::string& type);
    animal& operator=(animal& other);
    makesound();
}

#endif
