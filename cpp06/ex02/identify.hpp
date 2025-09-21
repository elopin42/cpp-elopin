/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:48:26 by elopin            #+#    #+#             */
/*   Updated: 2025/09/21 20:48:27 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <string>
#include <iostream>
#include <cstdlib>  
#include <ctime>
#include <typeinfo>

class Base {
  public:
    virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif // !IDENTIFY_HPP
