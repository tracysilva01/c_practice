#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	next_prime(int prime)
{
	int	result;
	int	i;

	result = prime + 1;
	i = 2;
	while (result != i)
	{
		while (result % i == 0)
		{
			++result;
			i = 2;
		}
		++i;
	}
}


void	fprime(char *str_number)
{
	int	number;
	int	prime;

	prime = 2;
	number = atoi(str_number);
	if (number == 1)
	{
		printf("1");
		return ;
	}
	while (number >= prime)
	{
		while (number % prime == 0 && number != 0)
		{
			printf("%d", prime);
			if (number != prime)
			{
				printf("*");
			}
			number = number / prime;
		}
		prime = next_prime(prime);
	}
	return;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
	return (0);
}

