/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:52:33 by elopin            #+#    #+#             */
/*   Updated: 2025/08/19 19:52:34 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0){
  std::cout << "Default constructor called" << std::endl;
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
