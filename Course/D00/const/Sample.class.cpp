/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:15 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:40:42 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Appel au constructeur" << std::endl;
}

Sample::~Sample(void){
	std::cout << "Appel au destructeur" << std::endl;
}

void	Sample::bar(void) const
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
	return ;
}
