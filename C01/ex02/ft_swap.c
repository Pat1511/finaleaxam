/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/29 18:52:23 by pfasage       #+#    #+#                 */
/*   Updated: 2023/07/29 18:52:26 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)

{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main()
{
	int	a = 23;
	int b = 44;
	ft_swap(&a, &b);
	printf("%d, %d\n", a, b);
	return(0);
}
*/
