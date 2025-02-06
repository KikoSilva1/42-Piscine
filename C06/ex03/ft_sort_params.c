/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:07:02 by framiran          #+#    #+#             */
/*   Updated: 2025/02/05 11:59:24 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_swap(char **str1, char **str2)
{
	char	*helper;

	helper = *str1;
	*str1 = *str2;
	*str2 = helper;
}

void	write_args(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	last_index;
	int	swap_counter;

	swap_counter = 1;
	i = 1;
	last_index = argc;
	while (swap_counter > 0)
	{
		i = 1;
		swap_counter = 0;
		while (i + 1 < last_index)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				swap_counter++;
			}
			i++;
		}
		last_index--;
	}
	write_args(argv);
}
