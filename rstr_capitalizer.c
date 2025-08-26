#include <unistd.h>

char	to_lowercase(char letter)
{
	if (letter >= 65 && letter <= 90)
		letter += 32;
	return (letter);
}

char	to_uppercase(char letter)
{
	if (letter >=97 && letter <= 122)
		letter -= 32;
	return (letter);
}

int	rstr_capitalizer(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i+1] != ' ' && string[i+1] != '\0')
		{
			string[i] = to_lowercase(string[i]);
			write(1, &string[i], 1);
			++i;
		}
		else
		{
			string[i] = to_uppercase(string[i]);
			write(1, &string[i], 1);
			++i;
		}
	}
	return (0);
}


int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			++i;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
