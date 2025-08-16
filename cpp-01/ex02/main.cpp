/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:35:10 by elopin            #+#    #+#             */
/*   Updated: 2025/08/16 16:35:11 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
  std::string str = "HI THIS IS BRAIN";
  std::string* stringPTR = &str;
  std::string& stringREF = str;

  std::cout << "str --> " << str <<std::endl;
  std::cout << "adr --> " << stringPTR << std::endl;
  std::cout << "ref --> " << &stringREF << std::endl;
  return 0;
}
