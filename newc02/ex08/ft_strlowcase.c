/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/01 16:40:59 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/01 18:18:41 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "BOhOOO069";
    ft_strlowcase(str);
    printf("str: %s\n", str);
    return (0);
}
*/
