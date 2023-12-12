/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:51 by romain            #+#    #+#             */
/*   Updated: 2023/12/12 13:56:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <ctime>
# include <iostream>
# include <cstdlib>

class Base {
	public:
		Base(void);
		virtual ~Base();
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);
#endif
