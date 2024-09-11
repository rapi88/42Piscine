/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:52:14 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/11 20:19:04 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nb_new;

	nb_new = nb;
	i = 2;
	if (nb_new <= 0)
		return (0);
	if (nb_new == 1)
		return (1);
	if (nb_new >= 2)
	{
		while (i * i <= nb_new)
		{
			if (i * i == nb_new)
				return (i);
			i++;
		}
	}
	return (0);
}
