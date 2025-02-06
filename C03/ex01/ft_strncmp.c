/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:11:24 by framiran          #+#    #+#             */
/*   Updated: 2025/02/03 13:29:29 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n <= 0)
		return (0);
	while (*s1 == *s2 && *s1 && --n)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
   
	char str1[] = "R2D2";
	char str2[] = "R2D2";
	size_t n = 4;
	int result1 = ft_strncmp(str1,str2,n);
	int result2 = strncmp(str1,str2,n);
	printf("result1: %i result2: %i", result1,result2);
}*/
