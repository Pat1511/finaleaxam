/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/29 18:52:43 by pfasage       #+#    #+#                 */
/*   Updated: 2023/07/29 18:52:48 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	tmp;

	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}
/*
int main()
{
	int	a = 6;
	int	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("quotient=%d module=%d\n\n", a, b); 
}
*/
