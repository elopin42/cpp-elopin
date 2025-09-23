#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
    try {
        Span sp(9);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << std::endl;

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        std::cout << std::endl;

        std::vector<int> moreNumbers;
        moreNumbers.push_back(9);
        moreNumbers.push_back(11);
        moreNumbers.push_back(1);
        moreNumbers.push_back(5);
        sp.addNumber(moreNumbers.begin(), moreNumbers.end());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        std::cout << std::endl;

        Span fail;
        sp.addNumber(2);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
