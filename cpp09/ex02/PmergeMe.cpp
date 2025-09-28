#include "PmergeMe.hpp"

double PmergeMe::triedeque() {
    clock_t start = clock();
    if (cont1.empty())
        return 0;

    std::deque<int> grands;
    std::deque<int> petits;

    for (size_t i = 0; i + 1 < cont1.size(); i += 2) {
        int a = cont1[i];
        int b = cont1[i + 1];
        if (a < b) {
            petits.push_back(a);
            grands.push_back(b);
        } else {
            petits.push_back(b);
            grands.push_back(a);
        }
    }
    if (cont1.size() % 2 != 0) {
        grands.push_back(cont1.back());
    }

    std::sort(grands.begin(), grands.end());

    for (size_t i = 0; i < petits.size(); ++i) {
        int val = petits[i];
        std::deque<int>::iterator pos =
            std::lower_bound(grands.begin(), grands.end(), val);
        grands.insert(pos, val);
    }

    cont1 = grands;
    clock_t end = clock();
    double duration = double(end - start) / CLOCKS_PER_SEC * 1000000;
    return duration;
}

double PmergeMe::trielist() {
    clock_t start = clock();
    if (cont2.empty())
        return 0;

    std::list<int> grands;
    std::list<int> petits;

    std::list<int>::iterator it = cont2.begin();
    while (it != cont2.end()) {
        int a = *it++;
        int b = 0;
        if (it != cont2.end()) {
            b = *it++;
        } else {
            grands.push_back(a);
            break;
        }

        if (a < b) {
            petits.push_back(a);
            grands.push_back(b);
        } else {
            petits.push_back(b);
            grands.push_back(a);
        }
    }

    grands.sort();

    for (std::list<int>::iterator pit = petits.begin(); pit != petits.end(); ++pit) {
        int val = *pit;
        std::list<int>::iterator pos = grands.begin();
        while (pos != grands.end() && *pos < val)
            ++pos;
        grands.insert(pos, val);
    }

    cont2 = grands;
    clock_t end = clock();
    double duration = double(end - start) / CLOCKS_PER_SEC * 1000000;
    return duration;
}

void PmergeMe::printlis() {
    for (std::deque<int>::const_iterator it = cont1.begin(); it != cont1.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}
