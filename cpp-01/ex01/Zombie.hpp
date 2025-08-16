/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:01 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:02 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
  private:
    std::string name;

  public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce();
    void setName(std::string name);
};

#endif

