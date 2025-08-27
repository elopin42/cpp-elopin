#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
  std::cout << "FragTrap default constructor called" << std::endl;

  hit_points = 100;
  energy_points = 100;
  attack_damage = 30;

}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
  std::cout << "FragTrap constructor for "<< this->name << " called" << std::endl;

  hit_points = 100;
  energy_points = 100;
  attack_damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "Fragtrap Destructor called " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap copy assignment called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::attack(const std::string& target) {
    if (hit_points <= 0) {
        std::cout << "FragTrap " << name << " can't attack (no HP)." << std::endl;
        return;
    }
    if (energy_points <= 0) {
        std::cout << "FragTrap " << name << " has no energy left." << std::endl;
        return;
    }
    --energy_points;
    std::cout << "FragTrap " << name << " attack " << target
              << ", causing " << attack_damage << " points of damage! "
              << "[HP:" << hit_points << " EN:" << energy_points << "]"
              << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " give a high Five!!!! yesssss!!!!" << std::endl;
}
