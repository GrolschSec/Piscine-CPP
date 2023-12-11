/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:51 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 23:09:09 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <ctime>
# include <iostream>
# include <cstdlib>

class Base {
	public:
		virtual ~Base();
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);
#endif
