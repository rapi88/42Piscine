/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerci <rcerci@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:00:55 by rcerci            #+#    #+#             */
/*   Updated: 2024/02/07 07:46:58 by rcerci           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (flag == 1)
				str[i] -= 32;
			flag = 0;
		}
		else if (str[i] <= '9' && str[i] >= '0')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
