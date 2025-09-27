/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:37:40 by elopin            #+#    #+#             */
/*   Updated: 2025/09/27 17:37:41 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

template <typename T>
void printElement(const T &x) {
    std::cout << x << " ";
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  std::string words[] = {"test1", "test2", "test3", "test4", "test5"};

  iter(arr, 5, printElement<int>);

  std::cout << std::endl;

  iter(words, 5, printElement<std::string>);

  std::cout << std::endl;

}
