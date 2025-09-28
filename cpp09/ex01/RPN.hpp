#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN {
  private:
    std::stack<double> stack;
  public:
    RPN() {}
    RPN(const RPN& other) : stack(other.stack) {}
    RPN& operator=(const RPN& other) {
        if (this != &other) {
            stack = other.stack;
        }
        return *this;
    }
    ~RPN() {}
    void process(std::string av);
    
};

#endif // !RPN_HPP
