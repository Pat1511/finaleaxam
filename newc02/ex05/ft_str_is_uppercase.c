/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/31 19:16:41 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/01 18:15:38 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i; 

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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

    result = ft_str_is_uppercase("TEAMOPAPI");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("WOkesha6996");
    printf("Result: %d\n", result);

	return 0;
}
*/
