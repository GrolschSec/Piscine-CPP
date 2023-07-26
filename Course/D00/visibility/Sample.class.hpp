/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:09 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:59:18 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP
# include <iostream>

class Sample {

public:
	int	publicFoo;
	Sample(void);
	~Sample(void);
	void	publicBar(void) const;
	void	test(void);

private:
	int		_privateFoo;
	void	_privateBar(void) const;
};
#endif