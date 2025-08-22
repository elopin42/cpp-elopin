#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
  private:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
  public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap(const std::string& name);
    ClapTrap();
    ~ClapTrap();
};

#endif 
