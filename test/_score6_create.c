#include "main.h"

/**
 * _print_rot13 - prints a string in rot13
 * @args: arguments list
 *
 * Return: number of chars printed
 */
int _print_rot13(va_list args)
{
	char *var;
	unsigned int m, n;
	int num = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	var = va_arg(args, char *);
	if (var == NULL)
		var = "(ahyy)";
	for (m = 0; var[m]; m++)
	{
		for (n = 0; in[n]; n++)
		{
			if (in[n] == var[m])
			{
				_putchar(out[n]);
				num++;
				break;
			}
		}
		if (!in[n])
		{
			_putchar(var[m]);
			num++;
		}
	}
	return (num);
}
