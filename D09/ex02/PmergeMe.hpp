/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:22:52 by romain            #+#    #+#             */
/*   Updated: 2023/12/21 11:31:34 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <limits>
# include <list>
# include <vector>

class PmergeMe {
	public:
		PmergeMe(const char **argv);
		~PmergeMe();
	private:
		PmergeMe(void);
		PmergeMe(PmergeMe const &cp);
		PmergeMe	&operator=(PmergeMe const &rhs);
}
#endif
