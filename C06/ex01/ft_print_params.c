/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:33:08 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/13 16:48:28 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	index;
	int	temp;

	index = 0;
	temp = 1;
	while (temp < ac)
	{
		while (av[temp][index] != '\0')
		{
			write(1, &av[temp][index], 1);
			index++;
		}
		write(1, "\n", 1);
		temp++;
		index = 0;
	}
}
