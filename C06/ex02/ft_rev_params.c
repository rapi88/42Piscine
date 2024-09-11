/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:49:10 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/13 16:58:50 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	index;

	index = 0;
	while (ac > 1)
	{
		while (av[ac - 1][index] != '\0')
		{
			write(1, &av[ac - 1][index], 1);
			index++;
		}
		write(1, "\n", 1);
		ac--;
		index = 0;
	}
	return (0);
}
