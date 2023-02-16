#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Fail)
 */
int main(void)
{
	char a[59]
	= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(a, 59, 1, stderr);
	return (1);
}
