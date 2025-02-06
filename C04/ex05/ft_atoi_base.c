/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:02:09 by framiran          #+#    #+#             */
/*   Updated: 2025/02/04 12:22:29 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	j;
	int	bs;

	bs = 0;
	while (base[bs] != 0)
	{
		j = bs + 1;
		while (base[j] != 0)
		{
			if (base[j] == base[bs] || base[bs] == '+' || base[bs] == '-')
				return (0);
			j++;
		}
		bs++;
	}
	return (bs);
}

void	handle_start_and_sign(char *str, int *sign, int *i)
{
	*i = 0;
	*sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*sign = -*sign;
		(*i)++;
	}
}

int	calculate_result(int i, char *base, int base_size, char *str)
{
	int	result;
	int	j;
	int	decimal_number;

	result = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < base_size)
		{
			if (base[j] == str[i])
			{
				decimal_number = j;
				break ;
			}
			j++;
		}
		result = result * base_size + decimal_number;
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_size;

	base_size = check_base(base);
	if (base_size <= 1)
		return (0);
	handle_start_and_sign(str, &sign, &i);
	return (sign * calculate_result(i, base, base_size, str));
}
/*int main()
{
	char *str = "  ++---ff1145";
	char *base = "0123456789abcdef";
	ft_atoi_base(str,base);
	
}*/
