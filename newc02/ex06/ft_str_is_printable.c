/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/31 19:18:26 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/02 15:52:04 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i; 

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
    int result;

    result = ft_str_is_printable("$!$!$");
    printf("Result: %d\n", result);

	result = ft_str_is_printable("\x04");
    printf("Result: %d\n", result);
	
	return 0;
}
*/
