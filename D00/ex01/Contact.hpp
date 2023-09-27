/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:27:11 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/27 15:46:50 by rlouvrie         ###   ########.fr       */
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
		std::string	formatCol(std::string col)	const;
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
