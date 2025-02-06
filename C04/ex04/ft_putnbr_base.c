/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:26:25 by framiran          #+#    #+#             */
/*   Updated: 2025/02/04 11:31:28 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	record_base(char *base)
{
	int	j;
	int	base_size;

	base_size = 0;
	while (base[base_size] != 0)
	{
		j = base_size + 1;
		while (base[j] != 0)
		{
			if (base[j] == base[base_size])
				return (0);
			j++;
		}
		base_size++;
	}
	return (base_size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	char	digit;
	long	long_nbr;

	long_nbr = (long) nbr;
	base_size = record_base(base);
	if (base_size <= 1)
		return ;
	if (long_nbr < 0)
	{
		write(1, "-", 1);
		long_nbr = -long_nbr;
	}
	if (long_nbr >= base_size)
		ft_putnbr_base(long_nbr / base_size, base);
	digit = base[long_nbr % base_size];
	write(1, &digit, 1);
}
