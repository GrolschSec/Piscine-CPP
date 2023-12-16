/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:06:24 by romain            #+#    #+#             */
/*   Updated: 2023/12/16 16:12:32 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator	easyfind(T	&container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it != container.end())
		return (it);
	throw ElementNotFoundException();
}
