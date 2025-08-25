#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class animal {
  protected:
    std::string type;
  public:
    virtual ~animal();
    animal();
    animal(const std::string& type);

    virtual void makesound() const;
    std::string gettype() const;
};

#endif
