/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:15 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:59:29 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	this->publicFoo = 42;
	std::cout << "this->publicFoo = " << this->publicFoo << std::endl;
	this->_privateFoo = 42;
	std::cout << "this->_privateFoo = " << this->_privateFoo << std::endl;
	this->publicBar();
	this->_privateBar();
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;
	return ;
}

void	Sample::test(void)
{
	this->_privateBar();
}

void	Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
	return ;
}
