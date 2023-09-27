/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:27:39 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/27 16:27:18 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	myPhonebook;
	std::string	choice;

	while (true)
	{
		if (std::cin.eof())
			return (0);
		std::cout << "Enter a command: (ADD, SEARCH or EXIT) ";
		if (!std::getline(std::cin, choice))
			return (0);
		if (choice.compare("ADD") == 0)
			myPhonebook.add();
		else if (choice.compare("SEARCH") == 0)
			myPhonebook.search();
		else if (choice.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
