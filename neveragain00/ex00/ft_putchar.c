/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/27 19:29:47 by pfasage       #+#    #+#                 */
/*   Updated: 2023/07/27 19:29:55 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write (1, &c, 1);
}

/*
int	main(void)
{
	ft_putchar('a');
}
*/
