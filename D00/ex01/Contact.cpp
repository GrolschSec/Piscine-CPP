/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:27:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/27 15:49:00 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::getIsSet(void)	const
{
	return (this->_isSet);
}

std::string	Contact::getInput(std::string msg)	const
{
	std::string	input;

	while (true)
	{
		std::cout << msg << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		if (std::cin.good() && !input.empty())
			return (input);
		else
		{
			std::cin.clear();
			std::cout << "Invalid input, try again !" << std::endl;
		}
	}
	return (input);
}

void	Contact::init(void)
{
	this->_firstName = this->getInput("Enter the contact first name: ");
	if (std::cin.eof())
		return ;
	this->_lastName = this->getInput("Enter the contact last name: ");
	if (std::cin.eof())
		return ;
	this->_nickname = this->getInput("Enter the contact nickname: ");
	if (std::cin.eof())
		return ;
	this->_phoneNumber = this->getInput("Enter the contact phone number: ");
	if (std::cin.eof())
		return ;
	this->_darkestSecret = this->getInput("Enter the contact darkest secret: ");
	if (std::cin.eof())
		return ;
	this->_isSet = true;
}

std::string	Contact::formatCol(std::string col) const
{
	int	spaces;

	if (col.size() > 10)
		return (col.substr(0, 9) + ".");
	spaces = 10 - col.size();
	return (std::string(spaces, ' ') + col);
}

void	Contact::displayLine(int index)	const
{
	std::string str;

	std::cout << std::string(9, ' ') << index;
	std::cout << "|";
	std::cout << this->formatCol(this->_firstName);
	std::cout << "|";
	std::cout << this->formatCol(this->_lastName);
	std::cout << "|";
	std::cout << this->formatCol(this->_nickname);
	std::cout << std::endl;
}

void	Contact::printContact(void)	const
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}

Contact::Contact(void)
{
	this->_isSet = false;
	return ;
}

Contact::~Contact(void)
{
	return ;
}
