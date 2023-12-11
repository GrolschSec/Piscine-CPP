/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Serializer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:25 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 21:52:12 by romain           ###   ########.fr       */
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
