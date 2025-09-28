#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <list>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <iomanip>

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
    size_t size() const {
        return cont1.size();
    }

    ~PmergeMe() {}
    double triedeque();
    double trielist();
    void printlis();

    void addNumber(int n) {
        cont1.push_back(n);
        cont2.push_back(n);
    }

};

#endif // PMERGEME_HPP

