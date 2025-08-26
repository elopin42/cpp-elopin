#ifndef SPE_HPP
# define SPE_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal {
  private:
    Brain* brain;
  public:
    Dog();
    ~Dog();
    void makeSound() const;

};

class Cat : public Animal {
  private:
    Brain* brain;
  public: 
    Cat();
    ~Cat();
    void makeSound() const;
};


#endif
