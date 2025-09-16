#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        std::cout << "----------------" << std::endl;
        Bureaucrat alice("Alice", 2);
        std::cout << "----------------" << std::endl;
        std::cout << alice << std::endl;
        std::cout << "----------------" << std::endl;
        std::cout << "Incrementing Alice's grade..." << std::endl;
        std::cout << "----------------" << std::endl;
        alice.incrementGrade();
        std::cout << "----------------" << std::endl;
        std::cout << alice << std::endl;
        std::cout << "----------------" << std::endl;
        std::cout << "Incrementing Alice's grade again..." << std::endl;
        std::cout << "----------------" << std::endl;
        alice.incrementGrade();
        std::cout << "----------------" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
        std::cout << "----------------" << std::endl;
    }

    try {
        Bureaucrat bob("Bob", 150);
        std::cout << "----------------" << std::endl;
        std::cout << bob << std::endl;
        std::cout << "----------------" << std::endl;
        std::cout << "Decrementing Bob's grade..." << std::endl;
        std::cout << "----------------" << std::endl;
        bob.decrementGrade(); 
        std::cout << "----------------" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
        std::cout << "----------------" << std::endl;
    }

    try {
        Bureaucrat charlie("Charlie", 0);
        std::cout << "----------------" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
        std::cout << "----------------" << std::endl;
    }

    return 0;
}

