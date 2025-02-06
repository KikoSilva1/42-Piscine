/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:52:40 by framiran          #+#    #+#             */
/*   Updated: 2025/02/01 13:38:33 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_buffer(char *buffer, char first, char second, char *hex_digits)
{
	buffer[1] = hex_digits[first % 16];
	buffer[0] = hex_digits[(first / 16) % 16];
	buffer[3] = hex_digits[second % 16];
	buffer[2] = hex_digits[(second / 16) % 16];
}

void	write_1st_adress(char *addr, char *hex_digits)
{
	char			buffer[16];
	int				i;
	unsigned long	address_value;

	address_value = (unsigned long)addr;
	i = 15;
	while (address_value >= 16)
	{
		buffer[i] = hex_digits[address_value % 16];
		address_value = address_value / 16;
		i--;
	}
	buffer[i] = hex_digits[address_value % 16];
	i--;
	while (i >= 0)
	{
		buffer[i] = '0';
		i--;
	}
	write(1, &buffer, 16);
	write(1, ": ", 2);
}

void	write_pair_of_chars_in_hexa(char first, char second, char *hex_digits)
{
	char	buffer_for_2chars_in_hexa[4];

	fill_buffer(buffer_for_2chars_in_hexa, first, second, hex_digits);
	write(1, &buffer_for_2chars_in_hexa, 4);
	write(1, " ", 1);
}

void	write_content(char *casted)
{
	while (*casted != 0)
	{
		if (*casted < 32 || *casted == 127)
			write(1, ".", 1);
		else
			write(1, casted, 1);
		casted++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		numb_pairs_of_chars_written;
	char	*casted;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	numb_pairs_of_chars_written = 0;
	casted = (char *) addr;
	if (size == 0)
		return (NULL);
	write_1st_adress(casted, hex_digits);
	while (*casted != 0 && *(casted + 1) != 0)
	{
		write_pair_of_chars_in_hexa(*casted, *(casted + 1), hex_digits);
		casted += 2;
		numb_pairs_of_chars_written++;
	}
	while (numb_pairs_of_chars_written < 8)
	{
		write(1, "    ", 4);
		write(1, " ", 1);
		numb_pairs_of_chars_written++;
	}
	casted = (char *) addr;
	write_content(casted);
	return (NULL);
}
