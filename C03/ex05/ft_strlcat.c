unsigned int ft_strlcat(char *dest, char *src, unsigned int size){

        unsigned int size_dest = 0;
        while(dest[size_dest] != '\0'){
                size_dest++;
        }
        unsigned int i = 0;
        while(size_dest + i < size -1){
                dest[size_dest + i] = src[i];
                i++;
        }
	dest[size_dest + i] = '\0';
	int remaining_size = 0;
	int j = i;
	while(src[j] != '\0'){
		remaining_size++;
		j++;
	}
        return size_dest + i + remaining_size ;	
}
