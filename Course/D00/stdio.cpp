/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:53:45 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/25 16:05:36 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buf[512];

	std::cout << "Hello World" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buf;
	std::cout << "You entered [" << buf << "]." << std::endl;
	std::cerr << "Error test" << std::endl;
	return (0);
}
