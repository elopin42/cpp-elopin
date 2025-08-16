/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:53 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:54 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[]){
  if (ac == 1)
    return 0;
  Harl jules;
  for (int i = 1; i < ac; i++)
    jules.complain(std::string(av[i]));
  return 0;
}
