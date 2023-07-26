/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:09 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/26 18:37:35 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP
# include <iostream>

class Sample {

public:
	float const pi;
	int			qd;
	Sample(float const f);
	~Sample(void);
	
	void	bar(void) const;
};
#endif