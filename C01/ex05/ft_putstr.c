/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/29 18:52:55 by pfasage       #+#    #+#                 */
/*   Updated: 2023/07/29 18:52:59 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main()
{
	char	*s;	

	s = "hi!";
	ft_putstr(s);
}
*/
