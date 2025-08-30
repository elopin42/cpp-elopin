/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:10:31 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:10:32 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "spe.hpp"

int main()
{
  std::cout << "\n---creation nouvel class---\n" << std::endl;
  // const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << "\n---get type---\n" << std::endl;
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << "\n---makeSound---\n" << std::endl;
  i->makeSound();
  j->makeSound();
  // meta->makeSound();
  // delete meta;
  std::cout << "\n---delete---\n" << std::endl;
  delete j;
  delete i;
  return 0;
}
