/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:09:49 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:09:50 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain() {
  std::cout << "brain constructor" << std::endl;
}

Brain::~Brain() {
  std::cout << "brain desstructor" << std::endl;
}

Brain::Brain(const std::string& name) {
  std::cout << "brain constructor" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  std::cout << "Brain copy assignement calles" << std::endl;
  if (this != &other)
    Brain::operator=(other);
  return *this;
}
