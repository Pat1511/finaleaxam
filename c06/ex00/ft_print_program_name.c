/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/02 22:20:22 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/02 22:22:27 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int		main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
*/
