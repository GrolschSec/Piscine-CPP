/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:01:09 by romain            #+#    #+#             */
/*   Updated: 2023/12/16 16:21:23 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <list>
# include <vector>
# include <map>
# include <stack>
# include <algorithm>
# include <iostream>

class ElementNotFoundException : public std::exception {
	public:
		const char* what() const throw();
};
# include "easyfind.tpp"
#endif
