/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:42:52 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 12:23:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <limits>
# include <cstdlib>
# include <ctime>

class Span {
	public:
		Span(unsigned int N);
		Span(Span const &cp);
		Span	&operator=(Span const &rhs);
		~Span();
		void	addNumber(int num);
		size_t	shortestSpan(void)	const;
		size_t	longestSpan(void)	const;
		void	addNumbers(std::vector<int>::const_iterator it,
			std::vector<int>::const_iterator ite);
	private:
		std::vector<int>	_vc;
		Span(void);
};
#endif
