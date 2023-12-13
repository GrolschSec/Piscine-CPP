/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:08:03 by romain            #+#    #+#             */
/*   Updated: 2023/12/13 13:24:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T* array, size_t length, void (*func)(const T&)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}
#endif
