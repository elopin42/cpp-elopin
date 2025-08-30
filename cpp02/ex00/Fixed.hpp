/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:52:37 by elopin            #+#    #+#             */
/*   Updated: 2025/08/19 19:52:38 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
