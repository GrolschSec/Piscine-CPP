/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:09:01 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/19 11:24:19 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	string_to_upper(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		std::cout << (char)toupper(str[i]);
	return ;
}

void	megaphone(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		string_to_upper(argv[i]);
		i++;
	}
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		megaphone(&argv[1]);
	return (0);
}
