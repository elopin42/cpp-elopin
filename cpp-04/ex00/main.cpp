#include "spe.hpp"

// int main()
// {
//   std::cout << "\n----constructor\n" << std::endl;
//   const animal* j = new Dog();
//   const animal* i = new Cat();
//
//   std::cout << "\n----types\n" << std::endl;
//   std::cout << j->gettype() << std::endl;
//   std::cout << i->gettype() << std::endl;
//
//   std::cout << "\n----sound\n" << std::endl;
//   i->makesound();  // cat sound
//   j->makesound();  // dog sound
//
//   std::cout << "\n----destructor\n" << std::endl;
//   delete j;
//   delete i;
//
//   return 0;
// }
//
//
int main()
{
  const animal* meta = new animal();
  const animal* j = new Dog();
  const animal* i = new Cat();
  std::cout << j->gettype() << " " << std::endl;
  std::cout << i->gettype() << " " << std::endl;
  i->makesound(); //will output the cat sound!
  j->makesound();
  meta->makesound();
  delete meta;
  delete j;
  delete i;
  return 0;
}
