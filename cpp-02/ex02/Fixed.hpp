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
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;
    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;
    Fixed& operator++(); 
    Fixed  operator++(int);
    Fixed& operator--();
    Fixed  operator--(int);
    static Fixed&       min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif 
