#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath> 

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
    int toInt() const;
    float toFloat() const;
    Fixed(const int h);
    Fixed(const float h);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif 
