/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:44:55 by elopin            #+#    #+#             */
/*   Updated: 2025/06/05 01:44:57 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class contact {
	private:
		std::string name;
		std::string phone;

	public:
		void setname(std::string n);
		void setphone(std::string p);

		std::string getname() const;
		std::string getphone() const;
};

#endif
