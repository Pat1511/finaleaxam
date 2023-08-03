/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 14:29:40 by pfasage       #+#    #+#                 */
/*   Updated: 2023/07/27 19:30:48 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)

{
	if (i < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*
int	main(void)
{
	ft_is_negative(-9);
}
*/
