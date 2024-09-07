/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:45:29 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/07 03:17:10 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printable(char c)
{
	int	i;

	i = 0;
	if (c <= 126 && c >= 32)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_printable(str[i]) == 1)
			putchar(str[i]);
		else
		{
			putchar('\\');
			putchar("0123456789abcdef"[str[i] / 16]);
			putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}
