/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 09:26:55 by srossatt          #+#    #+#             */
/*   Updated: 2022/11/07 11:35:55 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[0] >= 97 && str[0] <= 122))
			str[i] = str[i] - 32;
		else if ((str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		else if ((str[i] >= 48 && str[i] <= 57))
			str[i + 1] = str[i + 1];
		else if (! (str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 65 && str[i] <= 90))
		{
			if ((str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] -32;
				i++;
			}
		}
		i++;
	}
	return (str);
}
