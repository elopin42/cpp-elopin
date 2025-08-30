/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:04 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:05 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie* zombieHorde(int N, std::string name) {
  Zombie* horde = new Zombie[N];
  for(int i = 0; i < N; i++)
    horde[i].setName(name);
  return horde;

}

