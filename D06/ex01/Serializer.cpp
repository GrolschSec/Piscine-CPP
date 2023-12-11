/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:25 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 22:17:47 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/* ************************************************************************** */

Serializer::Serializer(void) {}

Serializer::Serializer(const Serializer &cp) {
	(void)cp;
}

Serializer	&Serializer::operator=(const Serializer &rhs) {
	(void)rhs;
	return (*this);
}

Serializer::~Serializer() {}

/* ************************************************************************** */

uintptr_t	Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
