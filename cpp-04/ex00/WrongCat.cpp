/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:09:36 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:09:37 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("wrong_cat") {
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const std::string& name) : WrongAnimal(name) {
  std::cout << "WrongCat constructor for " << this->type << "called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  std::cout << "WrongCat copy assignement called" << std::endl;
  if (this != &other) {
    WrongCat::operator=(other);
  }
  return *this;
}

void WrongCat::makeSound() const {
    std::cout << "wrong miaou" << std::endl;
}

