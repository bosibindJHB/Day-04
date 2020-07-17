#include <unistd.h>
int ft_iterative_power(int nb, int power)
{
	if (power ==1) 
		return nb;
	return(nb*ft_recursive(nb,power-1));
}
