/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:35:54 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 22:54:41 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <string>
# include <cstdlib>
# include <sstream>

class RPN {
	public:
		RPN(const char *arg);
		~RPN();
	private:
		std::stack<double>	_stack;
		RPN(void);
		RPN(RPN const &cp);
		RPN	&operator=(RPN const &rhs);
		void	authorizedChar(std::string const &str);
		void	validateNum(std::string const &digit);
		void	doOps(std::string const &op);
		void	calculator(std::string const &expr);
		void	getResult(void)	const;
};
#endif
