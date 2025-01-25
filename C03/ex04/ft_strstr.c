char *ft_strstr(char *str, char *to_find){
	int i = 0;
	int j = 0;
	if(*to_find == '\0')
		return str;
	while(str[i] != '\0'){
		if(str[i] == to_find[j]){
			while(str[i + j] == to_find[j] && str[i+j] != '\0' && to_find[j] != '\0'){
				j++;
			}
			if(to_find[j] == '\0'){
				return &str[i];
			}else{
				j = 0;
			}
		}
		i++;
	}
	return NULL;
}
