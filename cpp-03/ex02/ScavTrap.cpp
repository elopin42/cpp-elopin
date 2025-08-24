#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default"){
  std::cout << "scavtrap default constructor called" << std::endl;

  hit_points = 100;
  energy_points = 50;
  attack_damage = 20;

}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
  std::cout << "scavtrap constructor for "<< this->name << " called" << std::endl;

  hit_points = 100;
  energy_points = 50;
  attack_damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "scavtrap Destructor called " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called for " << this->name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap copy assignment called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (hit_points <= 0) {
        std::cout << "ScavTrap " << name << " can't attack (no HP)." << std::endl;
        return;
    }
    if (energy_points <= 0) {
        std::cout << "ScavTrap " << name << " has no energy left." << std::endl;
        return;
    }
    --energy_points;
    std::cout << "ScavTrap " << name << " attack " << target
              << ", causing " << attack_damage << " points of damage! "
              << "[HP:" << hit_points << " EN:" << energy_points << "]"
              << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
