#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> a;
    std::cout << "Taille de a : " << a.size() << std::endl;

    Array<int> b(5);
    for (unsigned int i = 0; i < b.size(); i++)
        b[i] = i * 2;

    std::cout << "Contenu de b : ";
    for (unsigned int i = 0; i < b.size(); i++)
        std::cout << b[i] << " ";
    std::cout << std::endl;

    Array<int> c = b;
    c[0] = 42;
    std::cout << "b[0] = " << b[0] << ", c[0] = " << c[0] << std::endl;

    try {
        b[10] = 100;
    } catch (const std::exception &e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}
