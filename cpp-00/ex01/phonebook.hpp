/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:51:21 by elopin            #+#    #+#             */
/*   Updated: 2025/06/06 22:07:07 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include <iostream>
#include <string>
#include "contact.hpp"

class phonebook{
	private:
		contact contacts[8];
		int	index;
		std::string format(const std::string& str) const;
	public:
		phonebook();
		void addcontact(const contact& newcontact);
		void displaycontacts() const;
		void search() const;
};

#endif
