/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:01:28 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 13:03:46 by romain           ###   ########.fr       */
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
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(10002);
    mstack.push(0);

    std::cout 
		<< "Iterating through stack:"
		<< std::endl;
    for (
		MutantStack<int>::iterator it = mstack.begin();
		it != mstack.end();
		++it
	) {
        std::cout 
			<< *it 
			<< " ";
    }
    std::cout 
		<< "\nReverse iterating:" 
		<< std::endl;
    for (
		MutantStack<int>::iterator it = mstack.end();
		it != mstack.begin(); --it
	) {
        std::cout 
			<< *it 
			<< " ";
    }
	std::cout
		<< "\nIterating mstack list: "
		<< std::endl;
    MutantStack<int, std::list<int> > mstackList;
    mstackList.push(10);
    mstackList.push(20);
    for (
		MutantStack<int, std::list<int> >::iterator it = mstackList.begin();
		it != mstackList.end();
		++it
	) {
        std::cout 
			<< *it 
			<< " ";
    }
	std::cout
		<< "\nIterating mstack vector: "
		<< std::endl;
    MutantStack<float, std::vector<float> > mstackVector;
    mstackVector.push(10.7);
    mstackVector.push(20.2);
	mstackVector.push(14.3);
	mstackVector.push(40.9);
	for (
		MutantStack<int, std::vector<float> >::iterator it = mstackVector.begin();
		it != mstackVector.end();
		++it
	) {
		std::cout
			<< *it
			<< " ";
	}
    return (0);
}
