/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:44:55 by elopin            #+#    #+#             */
/*   Updated: 2025/06/06 17:46:57 by elopin           ###   ########.fr       */
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
		void setfname(std::string f);
		void setnickname(std::string k);
		void setdarksecret(std::string s);

		std::string getname() const;
		std::string getphone() const;
		std::string getfname() const;
		std::string getnickname() const;
		std::string getdarksecret() const;
};

#endif
