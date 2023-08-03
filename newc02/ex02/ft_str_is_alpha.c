/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/31 18:05:33 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/01 18:29:28 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i; 

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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

    result = ft_str_is_alpha("idgaf");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("IDGAF");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("wokesha6996");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("jjj ");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);
    
    return 0;
}
*/
