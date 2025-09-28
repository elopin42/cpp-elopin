#include "RPN.hpp"

int main(int ac, char** av) {
  if (ac != 2)
  {
    std::cout << "you need 1 arguments" << std::endl;
    return (1);
  }
  RPN s;
  s.process(av[1]);
}
