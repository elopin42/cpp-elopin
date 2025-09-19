/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:28:02 by elopin            #+#    #+#             */
/*   Updated: 2025/09/19 16:28:03 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default_targer") {
    std::cout << "RobotomyRequestForm created with default target." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), target(other.target) {
    std::cout << "RobotomyRequestForm copied (target = " << target << ")" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other); 
        this->target = other.target;
    }
    std::cout << "RobotomyRequestForm assigned (target = " << target << ")" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm for target " << target << " destroyed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), target(target) {
  std::cout << "RobotomyRequestForm created with " << target << std::endl;
}
void RobotomyRequestForm::executeAction() const {
  std::cout << "* driling noise *" << std::endl;
  if (std::rand() % 2 == 0)
    std::cout << "robotomy success for " << target << std::endl;
  else
    std::cout << "robotomy failed for " << target << std::endl;
}
