/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:31:50 by srossatt          #+#    #+#             */
/*   Updated: 2022/10/30 16:59:35 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_array(int n, int array[], int j)
{
	int	i;

	i = 0;
	if (j > n)
	{
		ft_putchar(',');
	}
	while (i < n)
	{
		ft_putchar(array[i] + '0');
		i++;
	}
}

int	ft_get_left_pos(int n, int array[])
{
	int	current_pos;
	int	max_value;

	current_pos = n - 1;
	max_value = 9;
	while (array[current_pos] == max_value && current_pos >= 0)
	{
		current_pos = current_pos - 1;
		max_value = max_value - 1;
	}
	return (current_pos);
}

void	ft_calculate_and_print(int current_pos, int n, int numeros[], int j)
{
	int	max_value;
	int	i;

	max_value = 9;
	i = 1;
	while (current_pos >= 0)
	{	
		ft_print_array(n, numeros, j);
		j++;
		if (numeros[current_pos] == max_value)
		{
			current_pos = ft_get_left_pos(n, numeros);
			numeros[current_pos] = numeros[current_pos] + 1;
			while (current_pos + i < n && current_pos >= 0)
			{
				numeros[current_pos + i] = numeros[current_pos] + i;
				i = i + 1;
			}
			if (current_pos >= 0)
				current_pos = n - 1;
			else
				numeros[current_pos] = numeros[current_pos] + 1;
		}
	}
}

void	ft_print_combn(int n)
{
	int	numeros[n];
	int	current_pos;
	int	j;

	j = 0;
	current_pos = n - 1;
	while (j < n)
	{
		numeros[j] = j;
		j++;
	}
	ft_calculate_and_print(int current_pos, int n, int numeros, int j);
}
