#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const h){
  std::cout << "Int constructor called" << std::endl;
  _raw = h * 256;
}

Fixed::Fixed(float const h){
  std::cout << "Float constructor called" << std::endl;
  _raw = roundf(h * 256);
}

int Fixed::toInt() const {
  return _raw / 256;
}

float Fixed::toFloat() const {
  return _raw / 256.0F;
}

Fixed::Fixed(const Fixed &other){
  std::cout << "Copy constructor called" << std::endl;
  this->_raw = other._raw ;
}

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this == &other)
    return *this;
  this->_raw = other._raw;
  return *this;
}

Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
  std::cout << "getRawBits member function called" << std::endl;
  return this->_raw;
}

void Fixed::setRawBits( int const raw ){
  this->_raw = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
    out << f.toFloat();
    return out;
}

bool Fixed::operator<(const Fixed& rhs) const{
  return this->_raw < rhs._raw;
}

bool Fixed::operator>(const Fixed& rhs) const{
  return this->_raw > rhs._raw;
}

bool Fixed::operator>=(const Fixed& rhs) const{
  return this->_raw >= rhs._raw;
}

bool Fixed::operator<=(const Fixed& rhs) const{
  return this->_raw <= rhs._raw;
}

bool Fixed::operator==(const Fixed& rhs) const{
  return this->_raw == rhs._raw;
}

bool Fixed::operator!=(const Fixed& rhs) const{
  return this->_raw != rhs._raw;
}

Fixed Fixed::operator+(const Fixed& rhs) const{
  Fixed res;
  res.setRawBits(this->_raw + rhs._raw);
  return res;
}

Fixed Fixed::operator-(const Fixed& rhs) const{
  Fixed res;
  res.setRawBits(this->_raw - rhs._raw);
  return res;
}

Fixed Fixed::operator*(const Fixed& rhs) const{
  Fixed res;
  long long tmp = static_cast<long long>(this->_raw) * rhs._raw;
  res.setRawBits(static_cast<int>(tmp / 256));
  return res;
}

Fixed Fixed::operator/(const Fixed& rhs) const{
  Fixed res;
  long long tmp = static_cast<long long>(this->_raw) * 256;
  res.setRawBits(static_cast<int>(tmp / rhs._raw));
  return res;
}

Fixed& Fixed::operator++(){
  this->_raw += 1;
  return *this;
}

Fixed Fixed::operator++(int){
  Fixed res(*this);
  this->_raw += 1;
  return res;
}

Fixed& Fixed::operator--(){
  this->_raw -= 1;
  return *this;
}

Fixed Fixed::operator--(int){
  Fixed res(*this);
  this->_raw -= 1;
  return res;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
  if (a > b)
    return b;
  else
    return a;
}

const Fixed& Fixed::min(const Fixed& a,const Fixed& b){
  if (a > b)
    return b;
  else
    return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
  if (a < b)
    return b;
  else
    return a;
}

const Fixed& Fixed::max(const Fixed& a,const Fixed& b){
  if (a < b)
    return b;
  else
    return a;
}
