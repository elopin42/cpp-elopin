/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:53:02 by elopin            #+#    #+#             */
/*   Updated: 2025/08/19 19:59:25 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const  b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c(4);
Fixed d(5);
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << "--> " << (c - d) << std::endl;
std::cout << "--> " << (c + d) << std::endl;
std::cout << "--> " << (c * d) << std::endl;
std::cout << "--> " << (c / d) << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}
