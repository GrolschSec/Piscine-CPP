/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:22:52 by romain            #+#    #+#             */
/*   Updated: 2023/12/21 12:42:09 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <limits>
# include <list>
# include <deque>
# include <string>
# include <cstdlib>

class PmergeMe {
	public:
		PmergeMe(const int ac, char **av);
		~PmergeMe();
	private:
		const int	_size;
		std::list<int>	_lst;
		std::deque<int>	_dq;
		PmergeMe(void);
		PmergeMe(PmergeMe const &cp);
		PmergeMe	&operator=(PmergeMe const &rhs);
		void		validateArg(std::string const &arg);
};
#endif
