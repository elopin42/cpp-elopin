/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:27:57 by elopin            #+#    #+#             */
/*   Updated: 2025/09/19 16:27:58 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default_targer") {
    std::cout << "PresidentialPardonForm created with default target." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other), target(other.target) {
    std::cout << "PresidentialPardonForm copied (target = " << target << ")" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        AForm::operator=(other); 
        this->target = other.target;
    }
    std::cout << "PresidentialPardonForm assigned (target = " << target << ")" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm for target " << target << " destroyed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), target(target) {
  std::cout << "PresidentialPardonForm created with " << target << std::endl;
}

void PresidentialPardonForm::executeAction() const {
  std::cout << target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
