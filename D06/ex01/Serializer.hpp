/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:28 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 22:17:30 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <stdint.h>

struct Data {
    int num;
};

class Serializer {
	public:
		Serializer(const Serializer &cp);
		Serializer			&operator=(const Serializer &rhs);
		~Serializer();
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
	private:
		Serializer(void);
};
#endif
