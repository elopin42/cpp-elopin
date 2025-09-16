#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 50);
        std::cout << std::endl;
        Bureaucrat jim("Jim", 120);
        std::cout << std::endl;
        Form taxForm("Tax Form", 75, 50);
        std::cout << taxForm << std::endl;
        std::cout << std::endl;
        bob.signForm(taxForm);
        std::cout << std::endl;
        jim.signForm(taxForm);
        std::cout << std::endl;
        std::cout << taxForm << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
