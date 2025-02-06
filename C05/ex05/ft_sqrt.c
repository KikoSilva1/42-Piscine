/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:20:57 by framiran          #+#    #+#             */
/*   Updated: 2025/02/04 14:05:31 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	x;
	float	x0;
	int		int_part;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	x0 = nb / 2;
	while (1)
	{
		x = x0 - ((x0 * x0 - nb) / (2 * x0));
		if (x - x0 < 0.0001f && x0 - x < 0.0001f)
			break ;
		x0 = x;
	}
	int_part = (int) x;
	if (x - int_part >= 0.5f)
		int_part++;
	if (x - int_part < 0.001f && int_part - x < 0.001f)
		return (int_part);
	else
		return (0);
}
