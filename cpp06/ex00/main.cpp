#include  "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cout << "you need one argument" << std::endl;
    return (0);
  }
  ScalarConverter::convert(av[1]);
}
