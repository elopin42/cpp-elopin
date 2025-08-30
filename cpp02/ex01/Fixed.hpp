/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:52:48 by elopin            #+#    #+#             */
/*   Updated: 2025/08/19 19:52:49 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
