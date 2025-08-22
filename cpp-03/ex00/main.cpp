#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Bob");
    ClapTrap b("Eve");
    a.attack("training dummy");
    a.takeDamage(3);
    a.beRepaired(5);
    for (int i = 0; i < 10; ++i) {
        b.attack("air");
    }
    b.attack("still air");
    a.takeDamage(50);
    a.attack("dummy");
    a.beRepaired(3);
    return 0;
}

