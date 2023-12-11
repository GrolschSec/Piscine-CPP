/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:50:48 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 22:18:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void) {
	Data		data;
	Data		*dataPtr;
	uintptr_t	serialized;

	data.num = 42;
	serialized = Serializer::serialize(&data);
	dataPtr = Serializer::deserialize(serialized);
	if (dataPtr == &data) 
		std::cout << "Deserialize ok: " << dataPtr->num << std::endl;
	return (0);
}
