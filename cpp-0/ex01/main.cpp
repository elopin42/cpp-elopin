/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 02:23:37 by elopin            #+#    #+#             */
/*   Updated: 2025/06/06 22:00:08 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <string>
#include <cctype>

phonebook pb;

bool isValidPhoneNumber(const std::string& str) {
    if (str.empty())
        return false;

    size_t i = 0;

    if (str[0] == '+') {
        if (str.length() == 1)
            return false;
        i = 1;
    }

    while(i < str.length()) {
        if (!std::isdigit(str[i]))
            return false;
		i++;
    }

    return true;
}


void	addc()
{
	contact c1;
	
	std::string name;
	std::string phone;
	std::string fname;
	std::string nickname;
	std::string darksecret;

	while(42)
	{
		std::cout << "first name of contact --> ";
		if (!std::getline(std::cin, fname))
			return ;
		if (!fname.empty())
			break;
	}

	while(42)
	{
		std::cout << "last name of contact --> ";
		if (!std::getline(std::cin, name))
			return ;
		if (!name.empty())
			break;
	}

	while(42)
	{
		std::cout << "nickname of contact --> ";
		if (!std::getline(std::cin, nickname))
			return ;
		if (!nickname.empty())
			break;
	}

	while(42)
	{
		std::cout << "number of contact --> ";
		if (!std::getline(std::cin, phone))
			return ;
		if (!phone.empty() && isValidPhoneNumber(phone))
			break;
	}

	while(42)
	{
		std::cout << "darksecret of contact --> ";
		if (!std::getline(std::cin, darksecret))
			return ;
		if (!darksecret.empty())
			break;
	}

	c1.setname(name);
	c1.setphone(phone);
	c1.setnickname(nickname);
	c1.setdarksecret(darksecret);
	c1.setfname(fname);

	pb.addcontact(c1);
	std::cout << "contact add with success" << std::endl;
}

int main(int ac, char **av)
{
	std::string a = "ADD";
	std::string b = "SEARCH";
	std::string c = "EXIT";
	std::string line;
	(void) av;

	if (ac != 1)
		return (std::cout << "error" << std::endl, 0);
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
			pb.search();
		else if (line == c)
			break;
		else
		 	std::cout << "bad input\n";
	}
}
