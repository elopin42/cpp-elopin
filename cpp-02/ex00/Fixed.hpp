#ifndef MY_FIRST_CLASS_IN_ORTHODOX_CANONICAL_FORM
# define MY_FIRST_CLASS_IN_ORTHODOX_CANONICAL_FORM

#include <iostream>

class mfci{
  public:
    mfci();
    mfci(const mfci &other);
    mfci &operator=(const mfci &other);
    ~mfci();
};

#endif 
