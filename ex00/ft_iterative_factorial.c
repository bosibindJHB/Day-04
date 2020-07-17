#include<unistd.h>
in ft_interative_factorail(int nb)
{
	int i = 1;
	int fact = 1;
	while(i <= nb)
	{
		fact = fact *i;
		i++;
	}
	return fact*i;
	i++;
}
	int Main()
{
	int result ;
	result =ft_interative_factorial(5);
	printf("%d" , result);
}
