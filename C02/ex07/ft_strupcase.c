/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:31:31 by framiran          #+#    #+#             */
/*   Updated: 2025/01/28 12:50:19 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	char_to_upper(char *c)
{
	*c = 'A' + (*c - 'a');
}

int	char_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_lowercase(str[i]))
			char_to_upper(&str[i]);
		i++;
	}
	return (str);
}
