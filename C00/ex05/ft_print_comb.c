/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:17:30 by framiran          #+#    #+#             */
/*   Updated: 2025/01/22 11:22:07 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a, char b, char c)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	if (a < b && b < c)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
		{
			write (1, &comma, 1);
			write (1, &space, 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				print_numbers(a, b, c);
				c++;
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}
