/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:41:44 by srossatt          #+#    #+#             */
/*   Updated: 2022/11/08 16:36:34 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
