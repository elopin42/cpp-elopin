#include "ScavTrap.hpp"

int main() {
    std::cout << "--- Création d'un ScavTrap ---" << std::endl;
    ScavTrap s1("Serena");

    std::cout << "\n--- Test attaque ---" << std::endl;
    s1.attack("un dummy");
    s1.attack("un autre dummy");

    std::cout << "\n--- Test guardGate ---" << std::endl;
    s1.guardGate();

    std::cout << "\n--- Test copie ---" << std::endl;
    ScavTrap s2(s1);    
    s2.attack("copie dummy");

    std::cout << "\n--- Test affectation ---" << std::endl;
    ScavTrap s3;
    s3 = s1;           
    s3.attack("assign dummy");

    std::cout << "\n--- Fin du programme ---" << std::endl;
    return 0;
}

