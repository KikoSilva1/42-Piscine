char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size_dest;
	unsigned int	i;

	size_dest = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
