#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j, h, y;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            for (h = '0'; h <= '9'; h++)
            {
                for (y = '1'; y <= '9'; y++)
                {
                    putchar(i);
                    putchar(j);
                    putchar(' ');
                    putchar(h);
                    putchar(y);
                    if (i + j + h + y != '9' + '9' + '9' + '9')
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
