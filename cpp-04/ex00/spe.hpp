#ifndef SPE_HPP
# define SPE_HPP

#include "animal.hpp"

class Dog : public animal {
  public:
    Dog();
    ~Dog();
    void makesound();

};

class Cat : public animal {
  public: 
    Cat();
    ~Cat();
    void makesound();
};


#endif
