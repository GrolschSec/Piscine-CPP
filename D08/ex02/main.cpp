/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:01:28 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 12:34:06 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout
		<< "Top element: "
			<< mstack.top()
			<< std::endl;
    mstack.pop();
    std::cout 
		<< "Size after pop: "
		<< mstack.size() 
		<< std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(10002);
    mstack.push(0);
    std::cout 
		<< "Iterating through stack:" 
		<< std::endl;
    for (MutantStack<int>::iterator it = mstack.begin();
		it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout
		<< "\nReverse iterating:"
		<< std::endl;
    for (MutantStack<int>::iterator it = mstack.end();
		it != mstack.begin();) {
        --it;
        std::cout << *it << " ";
    }
    return 0;
}
