/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:09 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:28:26 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP
# include <iostream>

class Sample {

public:
	char	a1;
	int		a2;
	float	a3;
	Sample(char p1, int p2, float p3);
	~Sample(void);
};
#endif