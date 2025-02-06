/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:43:05 by framiran          #+#    #+#             */
/*   Updated: 2025/01/22 12:43:53 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	helper;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		helper = tab[i];
		tab[i] = tab[j];
		tab[j] = helper;
		i++;
		j--;
	}
}
