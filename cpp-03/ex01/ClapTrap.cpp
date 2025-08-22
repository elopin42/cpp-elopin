#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hit_points(10), energy_points(10), attack_damage(0){
  std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(10), energy_points(10), attack_damage(0){
  std::cout << "constructor for "<< this->name << " called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for ClapTrap " << this->name << std::endl;
}


void ClapTrap::attack(const std::string& target){
  if (hit_points <= 0){
    std::cout << name <<" d'ont have hit points" << std::endl;
    return;
  }

  if (energy_points <= 0){
    std::cout << name <<" d'ont have energy points" << std::endl;
    return;
  }

  if (energy_points > 0)
      --energy_points;
  std::cout << "ClapTrap " << name << " attacks " << target
    << ", causing " << attack_damage << " points of damage!"
    << " [HP:" << hit_points << " EN:" << energy_points << "]"
    << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
  if (hit_points <= 0)
  {
    std::cout << name << " already dead\n" << std::endl;
    return ;
  }

  hit_points -= amount;
  if (hit_points < 0) 
	  hit_points = 0;

  
  std::cout << "ClapTrap " << name << " takes " << amount << " damage!"
            << " [HP:" << hit_points << " EN:" << energy_points << "]"
            << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hit_points <= 0) {
        std::cout << "ClapTrap " << name
                  << " can't repair: no hit points (KO)." << std::endl;
        return;
    }
    if (energy_points <= 0) {
        std::cout << "ClapTrap " << name
                  << " can't repair: no energy left." << std::endl;
        return;
    }

    --energy_points;
	hit_points += static_cast<int>(amount);

    std::cout << "ClapTrap " << name << " repairs itself for "
              << amount << " HP. [HP:" << hit_points
              << " EN:" << energy_points << "]" << std::endl;
}

