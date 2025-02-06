/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:09:02 by framiran          #+#    #+#             */
/*   Updated: 2025/02/03 18:14:01 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	used_space;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	used_space = dest_len;
	i = dest_len;
	if (size <= dest_len)
		return (size + src_len);
	while (used_space < size - 1 && *src)
	{
		dest[i] = *src;
		src++;
		used_space++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	int size = 8;
	char str1[19] = "Hello";
	char str2[6] = "World";
	char str11[6] = "Hello";
	char str22[6] = "World";
	int result1 = ft_strlcat(str1,str2,size);
	printf("result 1: %u result 1:%s",result1, str1);
}*/
