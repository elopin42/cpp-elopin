/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spe.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:09:29 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:09:30 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPE_HPP
# define SPE_HPP

#include "animal.hpp"

class Dog : public Animal {
  public:
    Dog();
    ~Dog();
    void makeSound() const;

};

class Cat : public Animal {
  public: 
    Cat();
    ~Cat();
    void makeSound() const;
};


#endif
