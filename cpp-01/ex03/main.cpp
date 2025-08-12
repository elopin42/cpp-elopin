#include "Weapon.hpp"
#include "HumanA.hpp"

int main() {
    Weapon club("space 12");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("space 14");
    bob.attack();
}

