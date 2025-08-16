/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:26 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:27 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon club("aka47");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("pistolet");
        bob.attack();
    }
    {
        Weapon club("gun");
        Weapon club2("couteau");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        jim.removetype();
        jim.attack();
        jim.setWeapon(club2);
        jim.attack();
        club2.setType("space 12");
        jim.attack();
    }
}

