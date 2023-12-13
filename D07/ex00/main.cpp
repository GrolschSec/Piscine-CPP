/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:19:16 by romain            #+#    #+#             */
/*   Updated: 2023/12/13 11:01:48 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void) {
	int	a;
	int	b;

	a = 5;
	b = 19;
	std::cout << "value a: " << a << " value b: " << b << std::endl;
	::swap<int>(a, b);
	std::cout << "value a: " << a << " value b: " << b << std::endl;

	float	c;
	float	d;

	c = 5.19f;
	d = 39.0f;
	std::cout << "value c: " << c << " value d: " << d << std::endl;
	::swap<float>(c, d);
	std::cout << "value c: " << c << " value d: " << d << std::endl;

	std::cout << "Min value (int) is: " << ::min<int>(a, b) << std::endl;
	std::cout << "Max value (int) is: " << ::max<int>(a, b) << std::endl;

	std::cout << "Min value (float) is: " << ::min<float>(c, d) << std::endl;
	std::cout << "Max value (float) is: " << ::max<float>(c, d) << std::endl;

	std::string e = "chaine1";
	std::string f = "chaine2";

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	return (0);
}
