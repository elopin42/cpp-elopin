/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:16 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:17 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

HumanA::HumanA(const std::string &name, Weapon &weapon)
  : name(name), weapon(weapon) {}

  void HumanA::attack() const {
    std::cout << name << " attacks with a " << weapon.getType() <<std::endl;
  }
