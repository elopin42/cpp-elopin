#ifndef MY_FIRST_CLASS_IN_ORTHODOX_CANONICAL_FORM
# define MY_FIRST_CLASS_IN_ORTHODOX_CANONICAL_FORM

#include <iostream>

class Fixed{
  private:
    int _raw;
    static const int _fractionalBits = 8;
  public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif 
