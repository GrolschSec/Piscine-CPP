/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:26:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/27 15:52:58 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	return ;
}

void	PhoneBook::add(void)
{
	contacts[this->index].init();
	if (this->index + 1 > 7)
		this->index = 0;
	else
		this->index += 1;
}

void	PhoneBook::displayHeader(void) const
{
	std::cout << "     INDEX";
	std::cout << "|";
	std::cout << "FIRST NAME";
	std::cout << "|";
	std::cout << " LAST NAME";
	std::cout << "|";
	std::cout << "  NICKNAME";
	std::cout << std::endl;
}

void	PhoneBook::displayAll(void)	const
{
	int	i;

	i = 0;
	this->displayHeader();
	while (i < 8)
	{
		if (this->contacts[i].getIsSet())
			this->contacts[i].displayLine(i);
		i++;
	}
}

bool	PhoneBook::checkInput(std::string str) const
{
	if (str.empty())
		return (false);
	if (std::atoi(str.c_str()) == 0 && str[0] != '0')
		return (false);
	if (std::atoi(str.c_str()) < 0 || std::atoi(str.c_str()) > 7)
		return (false);
	if (!this->contacts[std::atoi(str.c_str())].getIsSet())
		return (false);
    return (true);
}

void	PhoneBook::search(void)	const
{
	std::string	input;
	this->displayAll();
	std::cout << "Enter an index: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || !this->checkInput(input))
	{
		std::cout << "Error: index doesn't exist." << std::endl;
		return ;
	}
	this->contacts[std::atoi(input.c_str())].printContact();
}

