/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:10:07 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:10:08 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong_Animal") {
  std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type)  {
  std::cout << "WrongAnimal constructor called for " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal(){
  std::cout << "wrong Animal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "generic wrong Animal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
  return type;
}
