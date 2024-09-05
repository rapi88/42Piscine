/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:48:50 by rcerci            #+#    #+#             */
/*   Updated: 2024/01/30 15:33:27 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(48 + a / 10);
			ft_putchar(48 + a % 10);
			ft_putchar(' ');
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
