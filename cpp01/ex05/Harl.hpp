/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:50 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:51 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl{
  private:
    void debug();
    void info();
    void warning();
    void error();
  public:
    void complain(std::string level);
};

#endif

