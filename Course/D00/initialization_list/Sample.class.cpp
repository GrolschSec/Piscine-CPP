/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:15 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:29:05 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this.a1 = " << this->a1 << std::endl;
	std::cout << "this.a2 = " << this->a2 << std::endl;
	std::cout << "this.a3 = " << this->a3 << std::endl;
}

Sample::~Sample(void){
	std::cout << "Appel au destructeur" << std::endl;
}
