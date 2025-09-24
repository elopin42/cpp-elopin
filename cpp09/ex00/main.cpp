#include "BitcoinExchange.hpp"

int main(int ac, char** av) {
    try {
        if (ac != 2) {
            throw std::runtime_error("Bad number of arguments");
        }

        btc fr;
        fr.loadfiles(av[1]);
        fr.printAll();
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
