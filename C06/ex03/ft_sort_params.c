/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:00:37 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/15 21:50:07 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str, char *str1)
{
	int	i;

	i = 0;
	while (str[i] == str1[i] && str[i] != '\0' && str1[i] != '\0')
		i++;
	return (str[i] - str1[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			++j;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	char	*temp;
	int		i;
	int		j;
	int		index;

	index = 0;
	j = 1;
	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(ac, av);
	return (0);
}
