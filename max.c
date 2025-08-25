int     max(int* tab, unsigned int len)
{
        int     i;
        int     max;

        i = 0;
        max = 0;
        while (i < len)
        {
                if (max < tab[i])
                        max = tab[i];
        ++i;
        }
        return (max);
}


#include <stdio.h>

int     main(void)
{
        int     i;
        int     *array;

        array[0] = 11;
        array[1] = 3;
        array[2] = 3;

        i = max(array, 3);
        printf("resultado: %d\n", i);
        return (0);
}
