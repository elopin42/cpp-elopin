
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class weapon{
  private:
    std::string type;
  public:
    const std::string& getType() const;
    void setType(const std::string &newtype);
};

#endif
