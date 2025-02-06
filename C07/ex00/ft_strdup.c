/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:49:25 by framiran          #+#    #+#             */
/*   Updated: 2025/02/05 13:56:51 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (*src)
	{
		size++;
		src++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*copy_storage;
	char	*copy_storage_start;

	size = ft_strlen(src);
	copy_storage = (char *) malloc(size + 1);
	copy_storage_start = copy_storage;
	while (*src)
	{
		*copy_storage = *src;
		src++;
		copy_storage++;
	}
	*copy_storage = '\0';
	return (copy_storage_start);
}
/*int main()
{
    char *original = "Exemplo de string";
    char *copy;

    copy = ft_strdup(original); // Chama a função para duplicar a string

    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Cópia: %s\n", copy);

        free(copy); // Libera a memória alocada
    } else {
        printf("Erro ao alocar memória.\n");
    }

    return 0;
}*/
