/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:12:33 by framiran          #+#    #+#             */
/*   Updated: 2025/02/03 16:09:59 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_needle(char *start, char *to_find)
{
	while (*to_find && *start && *to_find == *start)
	{
		to_find++;
		start++;
	}
	if (*to_find == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*to_find_start;

	if (*str == '\0')
		return (NULL);
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start = str;
		to_find_start = to_find;
		if (check_needle(start, to_find_start))
			return (str);
		else
			str++;
	}
	return (NULL);
}
