#include "Zombie.hpp"
#include <iostream>

// Prototype de la fonction qui crée la horde
Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;

    Zombie* horde = zombieHorde(N, "jean");

    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }

    std::cout << "-----------------" << std::endl;

    delete[] horde;

    return 0;
}

