#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Bob");
    ClapTrap b("Eve");

    // Bob attaque une cible fictive
    a.attack("training dummy");

    // Bob prend des dégâts
    a.takeDamage(3);

    // Bob se répare
    a.beRepaired(5);

    // On vide l'énergie de Eve
    for (int i = 0; i < 10; ++i) {
        b.attack("air");
    }

    // Eve essaie d'attaquer sans énergie
    b.attack("still air");

    // Bob prend un gros dégât et tombe KO
    a.takeDamage(50);

    // Bob essaie d'attaquer et de se réparer alors qu'il est KO
    a.attack("dummy");
    a.beRepaired(3);

    return 0;
}

