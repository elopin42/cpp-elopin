/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:48:19 by elopin            #+#    #+#             */
/*   Updated: 2025/09/21 20:48:20 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>
#include <stdint.h>
#include <iostream>

struct Data {
  int id;
  std::string name;
};

class Serializer {
  private:
    Serializer() {};
    Serializer(const Serializer &) {};
    ~Serializer() {};
    Serializer& operator=(const Serializer&) {return *this;};
  public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif // !SERIALIZER_HPP
