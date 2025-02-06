/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:59:54 by framiran          #+#    #+#             */
/*   Updated: 2025/02/05 14:31:40 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	*ft_range(int min, int max)
{
	int	size;
	int	*buffer;
	int	*buffer_start;

	size = max - min;
	if (size <= 0)
		return (NULL);
	buffer = (int *) malloc(size * sizeof(int));
	if (buffer == NULL)
		return (NULL);
	buffer_start = buffer;
	while (size--)
	{
		*buffer = min;
		buffer++;
		min++;
	}
	return (buffer_start);
}
