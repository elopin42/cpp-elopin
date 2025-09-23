#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>

class Span {
private:
    unsigned int N;
    std::vector<int> data;

public:
    Span();
    Span(unsigned int S);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int value);
    int shortestSpan() const;
    int longestSpan() const;

    template <typename Iterator>
    void addNumber(Iterator begin, Iterator end) {
        if (data.size() + std::distance(begin, end) > N)
            throw std::runtime_error("Span full");
        data.insert(data.end(), begin, end);
    }
};

#endif
