/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:02:57 by framiran          #+#    #+#             */
/*   Updated: 2025/01/22 11:27:50 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a0, char a1, char b0, char *b1)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	if ((b0 * 10 + *b1) > (a0 * 10 + a1))
	{
		write(1, &a0, 1);
		write(1, &a1, 1);
		write(1, &space, 1);
		write(1, &b0, 1);
		write(1, b1, 1);
		if (a0 != '9' || a1 != '8' || b0 != '9' || *b1 != '9')
		{
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
	(*b1)++;
}

void	reset(char *set_zero, char *add)
{
	*set_zero = '0';
	(*add)++;
}

void	ft_print_comb2(void)
{
	char	a0;
	char	a1;
	char	b0;
	char	b1;

	a0 = '0';
	a1 = a0;
	b0 = a1;
	b1 = '1';
	while (a0 <= '9')
	{
		while (a1 <= '9')
		{
			while (b0 <= '9')
			{
				while (b1 <= '9')
				{
					print_numbers(a0, a1, b0, &b1);
				}
				reset(&b1, &b0);
			}
			reset(&b0, &a1);
		}
		reset(&a1, &a0);
	}
}
