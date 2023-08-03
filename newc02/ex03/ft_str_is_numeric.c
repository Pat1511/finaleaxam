/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/31 19:00:28 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/01 18:06:38 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i; 

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

    result = ft_str_is_numeric("6996");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("wokesha");
    printf("Result: %d\n", result);

	result = ft_str_is_numeric("");
    printf("Result: %d\n", result);

	return 0;
}
*/
