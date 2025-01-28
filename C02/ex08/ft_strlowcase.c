/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:54:17 by framiran          #+#    #+#             */
/*   Updated: 2025/01/28 12:56:34 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	char_to_lower(char *c)
{
	*c = 'a' + (*c - 'A');
}

int	char_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_uppercase(str[i]))
			char_to_lower(&str[i]);
		i++;
	}
	return (str);
}
