/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spe.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:11:22 by elopin            #+#    #+#             */
/*   Updated: 2025/08/26 16:11:23 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPE_HPP
# define SPE_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal {
  private:
    Brain* brain;
  public:
    Dog();
    ~Dog();
    Dog(const std::string& name);
    Dog& operator=(const Dog& other);
    void makeSound() const;

};

class Cat : public Animal {
  private:
    Brain* brain;
  public: 
    Cat();
    ~Cat();
    Cat(const std::string& name);
    Cat& operator=(const Cat& other);
    void makeSound() const;
};


#endif
