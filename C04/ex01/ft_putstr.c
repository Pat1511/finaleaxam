                                                                               ]/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/02 18:45:36 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/02 20:30:24 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
/*
int main() 
{
    char letter[20] = "Tu pendejo";
    ft_putstr(letter);
    return(0);
}
*/
