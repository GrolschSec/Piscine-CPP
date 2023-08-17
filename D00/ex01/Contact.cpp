/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:27:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/17 14:04:35 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName(void)	const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)	const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void)	const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void)	const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)	const
{
	return (this->_darkestSecret);
}

void	Contact::set_isSet(void)
{
	this->_isSet = true;
}

void	Contact::setFirstName(std::string name)
{
	this->_firstName = name;
}

void	Contact::setLastName(std::string name)
{
	this->_lastName = name;
}

void	Contact::setNickname(std::string name)
{
	this->_nickname = name;
}

void	Contact::setPhoneNumber(std::string phone)
{
	this->_phoneNumber = phone;
}

void	Contact::setDarkestSecret(std::string secret)
{
	this->_darkestSecret = secret;
}

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
	this->setFirstName(this->getInput("Enter the contact first name: "));
	if (std::cin.eof())
		return ;
	this->setLastName(this->getInput("Enter the contact last name: "));
	if (std::cin.eof())
		return ;
	this->setNickname(this->getInput("Enter the contact nickname: "));
	if (std::cin.eof())
		return ;
	this->setPhoneNumber(this->getInput("Enter the contact phone number: "));
	if (std::cin.eof())
		return ;
	this->setDarkestSecret(this->getInput("Enter the contact darkest secret: "));
	if (std::cin.eof())
		return ;
	this->set_isSet();
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
	std::cout << "First name: " << this->getFirstName() << std::endl;
	std::cout << "Last name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Phone number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->getDarkestSecret() << std::endl;
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
