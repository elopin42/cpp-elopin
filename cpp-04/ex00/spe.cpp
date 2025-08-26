/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spe.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:09:26 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:09:27 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "spe.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const{
  std::cout << "waf waf" << std::endl;
}

Cat::Cat() : Animal("cat") {
  std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const{
  std::cout << "miaou miaou" << std::endl;
}
