int     ft_sqrt(int nb)
{
        float   x;
        float   x0;

        if (nb < 0) return 0;
        if (nb == 0 || nb == 1) return nb;
        x0 = nb / 2;
        while (1)
        {
                x = x0 - ((x0 * x0 - nb) / (2 * x0));
                if ( x - x0 < 0.0001f && x0 - x < 0.0001f)
                        break;
                x0 = x;
        }
	int intPart = (int) x;
    	if (x - intPart >= 0.5f) 
        	intPart++;  

        if (x - intPart < 0.001f && intPart - x < 0.001f)
	       	return intPart;
        else
                return 0;
}
