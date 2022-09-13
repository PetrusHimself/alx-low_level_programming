#include main.h
/**
 * main - prints the string "Alx" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "Putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
