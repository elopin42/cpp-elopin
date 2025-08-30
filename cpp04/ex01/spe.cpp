/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spe.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:10:01 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:10:02 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "spe.hpp"

Dog::Dog() : Animal("Dog") {
  brain = new Brain;
  std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const std::string& name) : Animal("Dog") {
  std::cout << "Dof constructor for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog copy assignement calles" << std::endl;
  if (this != &other)
    Dog::operator=(other);
  return *this;
}

void Dog::makeSound() const{
  std::cout << "waf waf" << std::endl;
}

Cat::Cat() : Animal("cat") {
  brain = new Brain;
  std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const{
  std::cout << "miaou miaou" << std::endl;
}

Cat::Cat(const std::string& name) : Animal("Cat") {
  std::cout << "Cat constructor for Dog" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat copy assignement calles" << std::endl;
  if (this != &other)
    Cat::operator=(other);
  return *this;
}
