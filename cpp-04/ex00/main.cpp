#include "spe.hpp"

int main()
{
  std::cout << "\n----constructor\n" << std::endl;
  Dog dog;
  Cat cat;
  std::cout << "\n----sound\n" << std::endl;
  dog.makesound();
  cat.makesound();
  std::cout << "\n----destructor\n" << std::endl;
  return 0;
}
