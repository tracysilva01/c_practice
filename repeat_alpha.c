#include <unistd.h>

int     index_letter(char letter)
{
        int     index;

        index = 0;
        if (letter >= 65 && letter <= 90)
        {
                index = letter - 64;
        }
        if (letter >= 97 && letter <= 122)
        {
                index = letter - 96;
        }
        return (index);
}


int     is_letter(char letter)
{
        if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
                return (1);
        return (0);
}


int     write_the_letter(char letter, int n)
{
        int     i;

        i = 0;
        while (n > i)
        {
                write(1, &letter, 1);
                ++i;
        }
        return (0);
}


void    repeat_alpha(char *word)
{
        int     i;
        int     n;

        i = 0;
        while (word[i] != '\0')
        {
                if (is_letter(word[i]))
                {
                        n = index_letter(word[i]);
                        write_the_letter(word[i], n);
                        ++i;
                }
                else
                {
                        write(1, &word[i], 1);
                        ++i;
                }
        }
}

int     main(int argc, char **argv)
{
        if (argc == 2)
                repeat_alpha(argv[1]);
        write(1, "\n", 1);
        return (0);
}
