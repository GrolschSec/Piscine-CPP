/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:23:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/17 17:32:28 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str memory address: " << &str << std::endl;
	std::cout << "stringPTR value: " << stringPTR << std::endl;
	std::cout << "stringREF memory address: " << &stringREF << std::endl;
	
	std::cout << "str value: " << str << std::endl;
	std::cout << "stringPTR dereferenced: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
}
