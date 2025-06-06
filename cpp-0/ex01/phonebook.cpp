/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:48:00 by elopin            #+#    #+#             */
/*   Updated: 2025/06/06 18:18:18 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

phonebook::phonebook() : index(0) {}

void phonebook::addcontact(const contact& newcontact) {
	contacts[index % 8] = newcontact;
	index++;
}

void phonebook::displaycontacts() const {
	int	i;

	i = -1;
	while(++i < 8 && i < index)
	{
		std::cout << i + 1 << ". " << contacts[i].getname() << " - " << contacts[i].getphone() << std::endl;
		std::cout << contacts[i].getfname() << " - " << contacts[i].getnickname() << std::endl;
		std::cout << " darksecret --> " << contacts[i].getdarksecret() << std::endl;
	}
}
