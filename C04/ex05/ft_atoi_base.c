int ft_atoi_base(char *str, char *base)
{
        int     i;
        int     sign;
        int     result;
	int    base_size;
        int     j;
        base_size = 0;
        while(base[base_size] != 0){
                j = base_size + 1;
                while(base[j]  != 0){
                        if(base[j] == base[base_size] || base[base_size] == '+' || base[base_size] == '-' )
                                return 0;
                        j++;
                }
                base_size++;
        }
        if (base_size <= 1)
                return 0 ;   
        i = 0;
        sign = 1;
	j = 0;
        while(str[i] == ' '||(str[i] >= 9 && str[i] <= 13))
                i++;
        while(str[i] == '+' || str[i] == '-'){
                if(str[i] == '-' )
                        sign = - sign;
                i++;
        }
	int decimal_number; 
	result = 0;
        while(str[i] != '\0'){
		j = 0;
		while(j < base_size){
			if(base[j] == str[i]){
			decimal_number = j;
			break;
			}
			j++;
		}
		result = result * base_size + decimal_number;
        i++;
        }
        return result * sign;
}
