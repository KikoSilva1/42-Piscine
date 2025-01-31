#include <unistd.h>
void fill_buffer(char *buffer,char first , char second, char* hex_digits)
{	
	buffer[1] = hex_digits[first % 16];
	buffer[0] = hex_digits[(first / 16) % 16];
	buffer[3] = hex_digits[second % 16];
        buffer[2] = hex_digits[(second / 16) % 16];
}

void write_1st_adress(char *addr,char *hex_digits)
{
        char buffer[16];
	int  i = 16;
        while(i > 0)
        {
                buffer[i] = hex_digits[(long)addr % 16];
                addr = (char *)((unsigned long)addr / 16);
                i--;
        }
	buffer[i] = hex_digits[(long)addr % 16];
        addr = (char *)((unsigned long)addr / 16);
        write(1,&buffer,16);
        write(1,": " ,2);
}

void	write_pair_of_chars_in_hexa(char first,char second,char *hex_digits)
{
	 char buffer_for_2chars_in_hexa[4];
         fill_buffer(buffer_for_2chars_in_hexa,first,second,hex_digits);
         write(1,&buffer_for_2chars_in_hexa,4);
         write(1," ",1);
      
}
void *ft_print_memory(void *addr, unsigned int size)
{
	int numb_pairs_of_chars_written = 0;
	void *original_addr = addr;
        char hex_digits[] = "0123456789abcdef"; 
	if(size == 0)
                return NULL;

	write_1st_adress(addr,hex_digits);
	while(*(char *)addr != 0 && *(char *)(addr + 1) != 0)
	{
		write_pair_of_chars_in_hexa(*(char *)addr, *(char *)(addr + 1),hex_digits);
		addr += 2;  
                numb_pairs_of_chars_written++;
	}
	while(numb_pairs_of_chars_written <= 8)
	{
		write(1,"    ",4);
		write(1," ",1);
		numb_pairs_of_chars_written++;
	}
	while(*(char *)original_addr != 0)
	{
		if (*(char *)original_addr < 32 || *(char *)original_addr == 127)
			write(1,".",1);
		else
			write(1,original_addr,1);
		original_addr++;
	}
	 return NULL;

}

int main()
{
    // Teste com strings diferentes, incluindo caracteres não imprimíveis
    char str1[17] = "Bonjour les amin";  // 16 caracteres
    char str3[17] = "\x09\x63\x65\x20\x71\x75\x20\x6f"; // Inicia com caracteres não imprimíveis
    char str4[17] = "\x0a\x09print_memory\x0a\x09"; // Teste com nova linha e tabulação
    char str5[17] = "\x0a\x20lol\x0alol\x0a\x20"; // Caractere nulo no final

    // Testando a função ft_print_memory com as diferentes strings
    ft_print_memory(str1, 16);
    write(1, "\n", 1);
    ft_print_memory(str3, 16);
    write(1, "\n", 1);
    ft_print_memory(str4, 16);
    write(1, "\n", 1);
    ft_print_memory(str5, 16);
    write(1, "\n", 1);

    return 0;
}

