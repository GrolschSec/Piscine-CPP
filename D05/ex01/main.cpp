/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:03:10 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/25 10:18:00 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
    try {
        Bureaucrat	charlie("Charlie", 100);
		Form		f1("test", 60, -1);
        std::cout << charlie;
		charlie.signForm(f1);
		charlie.signForm(f1);
    }
    catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what();
    }
    return (0);
}
