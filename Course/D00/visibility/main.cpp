/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:15:09 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:59:46 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.publicFoo = 99;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	//instance._privateFoo = 99;
	//std::cout << "instance._privateFoo = " << instance.publicFoo << std::endl;
	instance.publicBar();
	//instance._privateBar();
	instance.test();
	return (0);
}
