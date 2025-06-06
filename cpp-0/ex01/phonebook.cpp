/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:48:00 by elopin            #+#    #+#             */
/*   Updated: 2025/06/06 22:07:03 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

phonebook::phonebook() : index(0) {}

void phonebook::addcontact(const contact& newcontact) {
	contacts[index % 8] = newcontact;
	index++;
}

void phonebook::displaycontacts() const {
	int i = -1;
	while (++i < 8 && i < index) {
		std::cout << i + 1 << ". " << contacts[i].getname() << " - " << contacts[i].getphone() << std::endl;
		std::cout << contacts[i].getfname() << " - " << contacts[i].getnickname() << std::endl;
		std::cout << " darksecret --> " << contacts[i].getdarksecret() << std::endl;
	}
}

std::string phonebook::format(const std::string& str) const {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return std::string(10 - str.length(), ' ') + str;
}

void phonebook::search() const {
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |\n";
	std::cout << "--------------------------------------------\n";
	for (int i = 0; i < 8 && i < this->index; i++) {
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << format(contacts[i].getfname()) << "|";
		std::cout << format(contacts[i].getname()) << "|";
		std::cout << format(contacts[i].getnickname()) << "|" << std::endl;
	}

	std::string input;
	while(42)
	{
		std::cout << "input index : ";
		if (!std::getline(std::cin, input))
			return ;

		if (input.length() == 1 && std::isdigit(input[0])) {
			int i = input[0] - '0';
			if (i >= 0 && i < this->index) {
				std::cout << "\nContact :" << std::endl;
				std::cout << "First Name: " << contacts[i].getfname() << std::endl;
				std::cout << "Last Name: " << contacts[i].getname() << std::endl;
				std::cout << "Nickname: " << contacts[i].getnickname() << std::endl;
				std::cout << "Phone: " << contacts[i].getphone() << std::endl;
				return;
			}
		}
		std::cout << "Bad index." << std::endl;
	}
}


