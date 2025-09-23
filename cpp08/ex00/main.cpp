#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    try {
        std::vector<int>::iterator it = easyfind(v, 2);
        std::cout << "Found: " << *it << std::endl;
        it = easyfind(v, 42);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::list<int> l;
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);

    try {
        std::list<int>::iterator it = easyfind(l, 9);
        std::cout << "Found in list: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
