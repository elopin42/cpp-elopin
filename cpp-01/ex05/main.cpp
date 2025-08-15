#include "Harl.hpp"

int main(int ac, char *av[]){
  if (ac == 1)
    return 0;
  Harl jules;
  for (int i = 1; i < ac; i++)
    jules.complain(std::string(av[i]));
  return 0;
}
