/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:38:35 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/15 21:41:14 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	index;
	
	index = 0;
	if (ac > 0)
	{
		while (av[0][index] != '\0' && ac)
		{
			write(1, &av[0][index], 1);
			index++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
