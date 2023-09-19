/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:27:11 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/19 12:06:17 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class	Contact
{
	private:
		std::string	_firstName;
		std::string _lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		bool		_isSet;
		void		set_isSet(void);
		void		setFirstName(std::string name);
		void		setLastName(std::string name);
		void		setNickname(std::string name);
		void		setPhoneNumber(std::string phone);
		void		setDarkestSecret(std::string secret);
		std::string	formatCol(std::string col)	const;
		std::string	getFirstName(void)			const;
		std::string	getLastName(void)			const;
		std::string	getNickname(void)			const;
		std::string	getPhoneNumber(void)		const;
		std::string	getDarkestSecret(void)		const;
		std::string	getInput(std::string msg)	const;
	public:
		Contact(void);
		~Contact();
		void		displayLine(int index)		const;
		void		printContact(void)			const;
		bool		getIsSet(void)				const;
		void		init(void);
};
#endif
