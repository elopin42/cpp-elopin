#include "PmergeMe.hpp"
#include <climits>

int main(int ac, char** av) {
    if (ac < 2) {
        std::cerr << "Error: not enough arguments" << std::endl;
        return 1;
    }

    try {
        PmergeMe sorter;

        for (int i = 1; i < ac; ++i) {
            std::string arg(av[i]);

            for (size_t j = 0; j < arg.size(); ++j) {
                if (!isdigit(arg[j]))
                    throw std::runtime_error("Error: invalid number => " + arg);
            }

            long num = strtol(av[i], NULL, 10);

            if (num >= LONG_MAX || num <= LONG_MIN)
                throw std::runtime_error("Error: number out of range => " + arg);

            if (num < 0)
                throw std::runtime_error("Error: negative number => " + arg);

            sorter.addNumber(num);
        }

        std::cout << "Before: ";
        sorter.printlis();

        double timeDeque = sorter.triedeque();
        double timeList  = sorter.trielist();

        std::cout << "After: ";
        sorter.printlis();

        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << sorter.size()
              << " elements with std::deque: " << timeDeque << " us" << std::endl;
        std::cout << "Time to process a range of " << sorter.size()
              << " elements with std::list: " << timeList << " us" << std::endl;

    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}

