#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <list>
#include <iostream>

class PmergeMe {
private:
    std::deque<int> cont1;
    std::list<int> cont2;

public:
    PmergeMe() {}

    PmergeMe(const PmergeMe& other)
        : cont1(other.cont1), cont2(other.cont2) {}

    PmergeMe& operator=(const PmergeMe& other) {
        if (this != &other) {
            cont1 = other.cont1;
            cont2 = other.cont2;
        }
        return *this;
    }

    ~PmergeMe() {}
};

#endif // PMERGEME_HPP

