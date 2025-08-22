#include <unistd.h>

void	ftputchar(char a)
{
	write(1, &a, 1);
}

void	putnumber(int n)
{
	if (n <= 9)
		ftputchar(n+'0');
	else
	{
		ftputchar((n/10) + '0');
		ftputchar((n%10) + '0');
	}
	
}

void	fizzbuzz(int i)
{

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0 && i % 3 != 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
		{
			putnumber(i);
		}
		write(1, "\n", 1);
		++i;
	}
}


int	main(void)
{
	fizzbuzz(1);
	return (0);	
}

