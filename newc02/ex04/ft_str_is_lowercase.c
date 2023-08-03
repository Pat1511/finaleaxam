/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/31 19:11:35 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/01 18:15:45 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i; 

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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

    result = ft_str_is_lowercase("teamopapi");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("WOkesha6996");
    printf("Result: %d\n", result);

	return 0;
}
*/
