/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:41:44 by elopin            #+#    #+#             */
/*   Updated: 2025/06/06 17:55:44 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::setname(std::string n) {
	name = n;
};

void	contact::setphone(std::string p) {
	phone = p;
};

void	contact::setfname(std::string f) {
	fname = f;
};

void	contact::setnickname(std::string k) {
	nickname = k;
}

void	contact::setdarksecret(std::string s){
	darksecret = s;
}

std::string contact::getname() const {
	return name;
}

std::string contact::getphone() const {
	return phone;
}

std::string contact::getfname() const {
	return fname;
}

std::string contact::getnickname() const {
	return nickname;
}

std::string contact::getdarksecret() const {
	return darksecret;
}
