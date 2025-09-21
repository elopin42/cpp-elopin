/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:47:49 by elopin            #+#    #+#             */
/*   Updated: 2025/09/21 20:47:50 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cout << "you need one argument" << std::endl;
    return (0);
  }
  ScalarConverter::convert(av[1]);
}
