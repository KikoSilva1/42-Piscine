/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:49:38 by framiran          #+#    #+#             */
/*   Updated: 2025/01/22 12:43:50 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int lowest, int *tab, int start, int lowest_indice)
{
	int	helper;

	if (lowest_indice != start)
	{
		helper = tab[start];
		tab[start] = lowest;
		tab[lowest_indice] = helper;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	j;
	int	lowest;
	int	lowest_indice;

	start = 0;
	while (start < size - 1)
	{
		j = start + 1;
		lowest = tab[start];
		lowest_indice = start;
		while (j < size)
		{
			if (tab[j] < lowest)
			{
				lowest = tab[j];
				lowest_indice = j;
			}
			j++;
		}
		swap(lowest, tab, start, lowest_indice);
		start++;
	}
}
