/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:15 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:16:07 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void){
	std::cout << "Appel au constructeur" << std::endl;
	this->foo = 42;
	std::cout << "this->foo = " << this->foo << std::endl;
	this->bar();
}

Sample::~Sample(void){
	std::cout << "Appel au destructeur" << std::endl;
}

void	Sample::bar(void){
	std::cout << "Fonction bar" << std::endl;
	return ;
}
