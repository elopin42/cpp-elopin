// #include "spe.hpp"

// int main()
// {
//   std::cout << "\n----constructor\n" << std::endl;
//   const Animal* j = new Dog();
//   const Animal* i = new Cat();
//
//   std::cout << "\n----types\n" << std::endl;
//   std::cout << j->gettype() << std::endl;
//   std::cout << i->gettype() << std::endl;
//
//   std::cout << "\n----sound\n" << std::endl;
//   i->makeSound();  // cat sound
//   j->makeSound();  // dog sound
//
//   std::cout << "\n----destructor\n" << std::endl;
//   delete j;
//   delete i;
//
//   return 0;
// }
//
//
// int main()
// {
//   const Animal* meta = new Animal();
//   const Animal* j = new Dog();
//   const Animal* i = new Cat();
//   std::cout << j->gettype() << " " << std::endl;
//   std::cout << i->gettype() << " " << std::endl;
//   i->makeSound(); //will output the cat sound!
//   j->makeSound();
//   meta->makeSound();
//   delete meta;
//   delete j;
//   delete i;
//   return 0;
// }

#include "spe.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "\n----Polymorphism Test----\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "\n----WrongAnimal Test----\n" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    wrong->makeSound();
    wrongCat->makeSound();

    delete wrong;
    delete wrongCat;

    return 0;
}

