#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y;

<<<<<<< HEAD
for (m = 97; m <= 122; m++)
putchar(m);
for (n = 65; n <= 90; n++)
putchar(n);
=======
for (x = 97; x<= 122; x++)
{
putchar(x);
}
for (y = 65; y <= 90; y++)
{
putchar(y);
}
>>>>>>> c38d008b18676f16774155151031a0fcc1c46752
putchar('\n');
return (0);
}
