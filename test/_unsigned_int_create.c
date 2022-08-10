#include "main.h"

/**
 * _print_binary - takes an unsigned int and prints it in binary notation
 * @args: arguments list
 *
 * Return: number of characters printed
 */
int _print_binary(va_list args)
{
	unsigned int b, c, j, sum;
	unsigned int a[32];
	int num;

	b = va_arg(args, unsigned int);
	c = 2147483648; /* (2 ^ 31) */
	a[0] = b / c;
	for (j = 1; j < 32; j++)
	{
		c /= 2;
		a[i] = (b / c) % 2;
	}
	for (j = 0, sum = 0, num = 0; j < 32; j++)
	{
		sum += a[j];
		if (sum || j == 31)
		{
			_putchar('0' + a[j]);
			num++;
		}
	}
	return (num);
}
/**
 * _print_uint - prints an unsigned int in decimal notation
 * @args: arguments
 *
 * Return: number of digits printed
 */
int _print_uint(va_list args)
{
	unsigned int a[10];
	unsigned int j, c, b, sum;
	int count;

	b = va_arg(args, unsigned int);
	c = 1000000000; /* (10 ^ 9) */
	a[0] = b / c;
	for (j = 1; j < 10; j++)
	{
		c /= 10;
		a[j] = (b  / c) % 10;
	}
	for (j = 0, sum = 0, num = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum || j == 9)
		{
			_putchar('0' + a[j]);
			num++;
		}
	}
	return (num);
}
