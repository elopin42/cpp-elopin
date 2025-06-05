/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:41:44 by elopin            #+#    #+#             */
/*   Updated: 2025/06/05 01:47:20 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::setname(std::string n) {
	name = n;
};

void	contact::setphone(std::string p) {
	phone = p;
};

std::string contact::getname() const {
	return name;
}

std::string contact::getphone() const {
	return phone;
}
