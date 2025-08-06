#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* z = newZombie("Foo");
    z->announce();
    delete z;

    return 0;
}

