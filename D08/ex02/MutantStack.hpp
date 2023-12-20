/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:02:01 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 13:00:38 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>
# include <cstdlib>
# include <list>
# include <vector>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		typedef	typename Container::iterator			iterator;
		typedef typename Container::const_iterator		const_iterator;
		MutantStack(void);
		MutantStack(MutantStack const &cp);
		MutantStack	&operator=(MutantStack const &rhs);
		~MutantStack();
		iterator			begin(void);
		iterator			end(void);
		const_iterator		begin(void)	const;
		const_iterator		end(void)	const;
};
# include "MutantStack.tpp"
#endif
