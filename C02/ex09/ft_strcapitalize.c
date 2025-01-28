/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:00:03 by framiran          #+#    #+#             */
/*   Updated: 2025/01/28 16:41:15 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_upper(char *c)
{
	*c = 'A' + (*c - 'a');
}

void	to_lower(char *c)
{
	*c = 'a' + (*c - 'A');
}

int	is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int	is_alphanumeric(char c)
{
	if ((c >= 65 && c <= 122) || (c >= 48 && c <= 57))
	{
		if (c >= 91 && c <= 96)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (i == 0)
		{
			if (is_lowercase(str[i]))
				to_upper(&str[i]);
			i++;
		}
		else
		{
			if (!is_alphanumeric(str[i - 1]) && is_lowercase(str[i]))
				to_upper(&str[i]);
			else if (is_alphanumeric(str[i - 1]) && is_uppercase(str[i]))
				to_lower(&str[i]);
			i++;
		}
	}
	return (str);
}
