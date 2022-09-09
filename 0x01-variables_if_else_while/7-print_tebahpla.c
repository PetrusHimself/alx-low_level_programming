#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int s;
s = 122;
while (s >= 97)
{
putchar(s);
s--;
}
putchar('\n');
return (0);
}
