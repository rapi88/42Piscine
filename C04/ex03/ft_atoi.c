/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:44:28 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/11 18:19:14 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespace(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = whitespace(str, &i);
	while (str[i] <= '9' && str[i] >= '0' && str[i] != '\0')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result = result * sign;
	return (result);
}
