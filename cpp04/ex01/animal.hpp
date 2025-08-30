/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:09:45 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:09:46 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
  protected:
    std::string type;
  public:
    virtual ~Animal();
    Animal();
    Animal(const std::string& type);
    Animal& operator=(const Animal& other);

    virtual void makeSound() const;
    std::string getType() const;
};

#endif
