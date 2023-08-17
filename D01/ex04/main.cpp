/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:10:40 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/17 23:43:14 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	usage(std::string name)
{
	std::cerr << "Usage: " << name;
	std::cerr << " <filename> <s1> <s2>" << std::endl;
}

bool	open_input(std::string name, std::ifstream *infile)
{
	infile->open(name.c_str());
	if (!infile->is_open())
	{
		std::cerr << "Error: failed to open infile." << std::endl;
		return (false);
	}
	return (true);
}

bool	open_output(std::string name, std::ofstream *outfile)
{
	 std::string outname = name + ".replace";
	outfile->open(outname.c_str());
	if (!outfile->is_open())
	{
		std::cerr << "Error: failed to open outfile." << std::endl;
		return (false);
	}
	return (true);
}

void	replace(std::ifstream &in, std::ofstream &out, std::string s1, std::string s2)
{
	std::string	line;
	size_t		pos;

	while (getline(in, line))
	{
		pos = 0;
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		out << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
		return (usage(std::string(argv[0])), 1);
	else
	{
		if (!open_input(std::string(argv[1]), &infile))
			return (2);
		if (!open_output(std::string(argv[1]), &outfile))
			return (3);
		replace(infile, outfile, std::string(argv[2]), std::string(argv[3]));
	}
}
