/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:34 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:35 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
  private:
    std::string type;
  public:
    Weapon(const std::string &type);
    const std::string& getType() const;
    void setType(const std::string &newtype);
};

#endif
