#include <unistd.h>
void	ft_putnbr_base(int nbr, char *base){
       	int    base_size;
	int	j;
        base_size = 0;
        while(base[base_size] != 0){
		j = base_size + 1;
		while(base[j]  != 0){
			if(base[j] == base[base_size])
				return;
			j++;
		}
                base_size++;
	}
	if (base_size <= 1)
		return;

        char digit;
	if(nbr <  0){
               write(1,"-",1);
               nbr = -nbr;
        }
        if(nbr >= base_size){ //numero demasiado grande, não pode ser representado por apenas um digito da base  
                ft_putnbr_base(nbr / base_size, base); //numero perde a casa à direita
        }
	digit = base[nbr % base_size]; //digito (pode ser representado por um valor da base)
        write(1,&digit,1);
}
