/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:27:26 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/19 12:09:54 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
		void	displayHeader(void)	const;
		void	displayAll(void)	const;
		bool	checkInput(std::string str) const;
	public:
		PhoneBook();
		void	add_contact(void);
		void	search(void)		const;
};
#endif
