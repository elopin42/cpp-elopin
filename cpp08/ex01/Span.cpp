#include "Span.hpp"
#include <climits>

Span::Span() : N(0) {}

Span::Span(unsigned int S) : N(S) {}

Span::Span(const Span &other) : N(other.N), data(other.data) {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        N = other.N;
        data = other.data;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int value) {
  if (data.size() >= N)
    throw std::runtime_error("Span full");
  data.push_back(value);
}

int Span::shortestSpan() const {
  int o = INT_MAX;
  if (data.size() < 2) throw std::runtime_error("you need more value");
  std::vector<int> copy = data;
  std::sort(copy.begin(), copy.end());
  for (size_t i = 0; i < copy.size() - 1; i++)
    if (copy[i + 1] - copy[i]  < o)
      o = copy[i + 1] - copy[i];
  return o;
}

int Span::longestSpan() const {
  int o = INT_MIN;
  if (data.size() < 2) throw std::runtime_error("you need more value");
  std::vector<int> copy = data;
  std::sort(copy.begin(), copy.end());
  for (size_t i = 0; i < copy.size() - 1; i++)
    if (copy[i + 1] - copy[i]  > o)
      o = copy[i + 1] - copy[i];
  return o;

}
