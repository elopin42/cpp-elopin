/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:48:10 by elopin            #+#    #+#             */
/*   Updated: 2025/09/21 20:48:11 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
  Data data;
  data.id = 42;
  data.name = "elopin";
  std::cout << "origine adresse for data is --> " << &data << std::endl;
  uintptr_t raw = Serializer::serialize(&data);
  std::cout << "data serialize = " << raw << std::endl;
  Data* ptr = Serializer::deserialize(raw);
  std::cout << "data deserialize = " << ptr << std::endl;
  std::cout << "ptr.id -> " << ptr->id << std::endl;
  std::cout << "ptr.name -> " << ptr->name << std::endl;
}
