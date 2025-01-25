int	ft_strncmp(char *s1, char *s2, unsigned int n){
    unsigned int i  = 0;
    while(i < n)
    {
        if(s1[i] - s2[i] != 0){
            return s1[i] - s2[i];
        }
        i++;
    }
    /*if((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0')) //s1 finished first(is smaller)
        return s1[i]-s2[i];
    else*/
    return 0;
}

