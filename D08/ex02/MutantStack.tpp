/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:49:00 by romain            #+#    #+#             */
/*   Updated: 2023/12/18 11:18:06 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>() {}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const &cp)
	: std::stack<T, Container>(cp) {}

template <typename T, typename Container>
MutantStack<T, Container>	
	&MutantStack<T, Container>::operator=(MutantStack const &rhs) {
	if (this != &rhs) {
		std::stack<T, Container>::operator=(rhs);
	}
	return (*this);
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator
	MutantStack<T, Container>::begin(void) {
	return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator
	MutantStack<T, Container>::end(void) {
	return (this->c.end());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator
	MutantStack<T, Container>::begin(void) const {
	return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator
	MutantStack<T, Container>::end(void) const {
	return (this->c.end());
}
