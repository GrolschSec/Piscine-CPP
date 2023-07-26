/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:15 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/25 16:14:57 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void){
	std::cout << "Appel au constructeur" << std::endl;
}

Sample::~Sample(void){
	std::cout << "Appel au destructeur" << std::endl;
}
