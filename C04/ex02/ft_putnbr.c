/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfasage <pfasage@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/02 19:34:51 by pfasage       #+#    #+#                 */
/*   Updated: 2023/08/03 15:28:18 by pfasage       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	number;

	number = nb;
	if (number == 0) 
	{
		ft_putchar('0');
		return ;
	}
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= 10) 
	{
		ft_putnbr(number / 10);
		number = number % 10;
	}
	ft_putchar(number + 48);
}
/*
int main()
{
	int nmb = 42;
 	ft_putnbr(nmb);
	return (0);
}
*/

while (i <= 9)
	write(1, i, 1);
	i++;

write(1, '1', 1);
write(1, "2", 1);
write(1, "3", 1);
write(1, "4", 1);
write(1, "5", 1);
