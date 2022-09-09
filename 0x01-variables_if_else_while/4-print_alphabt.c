#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int y;

for (y = 97; y <= 122; y++)
{
<<<<<<< HEAD
       if (m == 101 || m == 113)
=======
if (y == 101 || y == 113)
>>>>>>> c38d008b18676f16774155151031a0fcc1c46752
{
}
else
{
putchar(y);
}
}
putchar('\n');
return (0);
}
