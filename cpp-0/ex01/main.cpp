/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 02:23:37 by elopin            #+#    #+#             */
/*   Updated: 2025/06/05 02:53:18 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <string>

void	addc()
{
	phonebook pb;
	contact c1;
	
	std::string name;
	std::string phone;

	std::cout << "name of contact --> ";
	if (!std::getline(std::cin, name))
		return ;
	
	std::cout << "number of contact --> ";
	if (!std::getline(std::cin, phone))
		return ;

	c1.setname(name);
	c1.setphone(phone);

	pb.addcontact(c1);
	pb.displaycontacts();
}

int main(int ac, char **av)
{
	std::string a = "ADD";
	std::string b = "SEARCH";
	std::string c = "EXIT";
	std::string line;
	(void) av;
	if (ac != 1)
		return (std::cout << "error\n", 0);
	while(42)
	{
    	std::cout << "type --> ADD, SEARCH or EXIT: ";
    	if (!std::getline(std::cin, line))
		{
			std::cout << "\n";
			break;
		}	

		if (line == a)
			addc();
		else if (line == b)
			std::cout << "b\n";
		else if (line == c)
			break;
		else
		 	std::cout << "bad input\n";
	}
}
