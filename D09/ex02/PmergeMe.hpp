/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:22:52 by romain            #+#    #+#             */
/*   Updated: 2023/12/21 13:15:49 by romain           ###   ########.fr       */
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
# include <iomanip>

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
		void		validateArg(std::string const &arg) const;
		void		sort(void);
		template	<typename T>
		void		printContainer(T &container)		const;
		template	<typename T>
		void		mergeInsertSort(T &container);
		template	<typename T>
		void		merge(T &container, T &left, T &right);
};
#endif
