/* ************************************************************************** */   
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/02 17:54:26 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/02 20:29:36 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int main()
{
 	char str[] = "COCOPOCOLOCO";
	int result = ft_strlen(str);
 	printf("%d\n", result);
 	return 0;
}
*/
