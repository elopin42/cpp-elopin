#include "Intern.hpp"

int main() {
    Intern someIntern;

    AForm* form1 = someIntern.makeForm("robotomy request", "Bender");
    if (form1) {
        std::cout << "Form1 created successfully!" << std::endl;
        delete form1;
    }

    AForm* form2 = someIntern.makeForm("shrubbery creation", "Garden");
    if (form2) {
        std::cout << "Form2 created successfully!" << std::endl;
        delete form2;
    }

    AForm* form3 = someIntern.makeForm("presidential pardon", "Alice");
    if (form3) {
        std::cout << "Form3 created successfully!" << std::endl;
        delete form3;
    }

    AForm* form4 = someIntern.makeForm("fake form", "Nobody");
    if (!form4) {
        std::cout << "Form4 creation failed as expected." << std::endl;
    }

    return 0;
}
