/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:36:07 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/07/25 15:48:59 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_lvar = 1;
int	f(void){ return (2); }

namespace	Foo {
	int	g_lvar = 2;
	int	f(void){ return (3); }
}

namespace	Bar {
	int	g_lvar = 4;
	int	f(void){ return (6); }
}

namespace Muf = Bar;

int	main(void)
{
	printf("glvar:		%d\n", g_lvar);
	printf("f():		%d\n", f());
	
	printf("Foo::glvar	%d\n", Foo::g_lvar);
	printf("Foo::f()	%d\n", Foo::f());

	printf("Bar::glvar	%d\n", Bar::g_lvar);
	printf("Bar::f()	%d\n", Bar::f());

	printf("Muf::glvar	%d\n", Muf::g_lvar);
	printf("Muf::f()	%d\n", Muf::f());

	printf("::glvar		%d\n", ::g_lvar);
	printf("::f()		%d\n", ::f());
	return (0);
}
