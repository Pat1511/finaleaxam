/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/29 18:52:34 by pfasage       #+#    #+#                 */
/*   Updated: 2023/07/29 18:52:37 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	{
		*div = a / b;
		*mod = a % b;
	}
}

//#include <stdio.h>
/*
int main()
{
	int		div, mod, n, n1;

	n = 42;
	n1 = 21;

	ft_div_mod(n, n1, &div, &mod);
	printf("\n%d/%d = %d with remainder %d\n\n", n, n1, div, mod);
}
*/
