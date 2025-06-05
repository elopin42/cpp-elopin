/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:44:55 by elopin            #+#    #+#             */
/*   Updated: 2025/06/05 16:53:14 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class contact {
	private:
		std::string name;
		std::string phone;
		std::string fname;
		std::string nickname;
		std::string darksecret;

	public:
		void setname(std::string n);
		void setphone(std::string p);

		std::string getname() const;
		std::string getphone() const;
};

#endif
