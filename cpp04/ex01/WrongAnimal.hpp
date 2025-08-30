/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:10:10 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:10:11 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
  protected:
    std::string type;
  public:
    WrongAnimal();
    WrongAnimal(const std::string& type);
    WrongAnimal& operator=(const WrongAnimal& other);
    virtual ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;
};

#endif
