/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:02:06 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 19:05:48 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	try {
		Bureaucrat	tom("Tom", 20);
		Form		f1("form1", 15, 10);
		Form		f2("form2", 20, 15);

		std::cout << f1;
		tom.signForm(f1);
		tom.signForm(f2);
		tom.signForm(f2);
	}
	catch (std::exception &e) {
		std::cerr
			<< "Exception caught: "
			<< e.what()
			<< std::endl;
	}
}
