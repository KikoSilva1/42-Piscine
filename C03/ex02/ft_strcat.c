char *ft_strcat(char *dest, char *src){

	int size_dest = 0;
	while(dest[size_dest] != '\0'){
		size_dest++;
	}
	int i = 0;
	while(src[i] != '\0'){
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return dest;

}
