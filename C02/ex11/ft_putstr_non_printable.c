/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:46:14 by framiran          #+#    #+#             */
/*   Updated: 2025/02/01 10:50:35 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hexa_value(char c)
{
	char	hexa_digit;

	hexa_digit = "0123456789abcdef"[c % 16];
	if (c > 16)
		write_hexa_value(c / 16);
	write(1, &hexa_digit, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hexa_digit;

	while (*str != 0)
	{
		if ((*str >= 0 && *str <= 31) || *str == 127)
		{
			write(1, "\\", 1);
			if (*str <= 16)
			{
				hexa_digit = "0123456789abcdef"[*str % 16];
				write(1, "0", 1);
				write(1, &hexa_digit, 1);
			}
			else
				write_hexa_value(*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
