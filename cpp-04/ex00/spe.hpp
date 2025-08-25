#ifndef SPE_HPP
# define SPE_HPP

#include "animal.hpp"

class Dog : public Animal {
  public:
    Dog();
    ~Dog();
    void makeSound() const;

};

class Cat : public Animal {
  public: 
    Cat();
    ~Cat();
    void makeSound() const;
};


#endif
