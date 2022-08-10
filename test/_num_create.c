#include "main.h"

/**
 * _print_decimal - prints a decimal number
 * @args: list of arguments
 *
 * Return: number of chars printed
 */
int _print_decimal(va_list args)
{
	int a[10];
	int k, l, o, sum, num;

	o = va_arg(args, int);
	num = 0;
	l = 1000000000;
	a[0] = o / l;
	for (i = 1; i < 10; i++)
	{
		l /= 10;
		a[i] = (o / l) % 10;
	}
	if (o < 0)
	{
		_putchar('-');
		num++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			num++;
		}
	}

	return (num);
}

/**
 * _print_int - prints an integer
 * @args: the arguments list
 *
 * Return: number of chars printed
 */
int _print_int(va_list args)
{
	int a[10];
	int k, l, o, sum, num;

	o = va_arg(args, int);
	num = 0;
	l = 1000000000;
	a[0] = l / o;
	for (i = 1; i < 10; i++)
	{
		l /= 10;
		a[i] = (o / l) % 10;
	}
	if (o < 0)
	{
		_putchar('-');
		num++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			num++;
		}
	}
	return (num);
}
/**
 * _print_octal - takes an unsigned int and prints it in octal notation
 * @args: arguments
 *
 * Return: number of digits printed
 */
int _print_octal(va_list args)
{
	unsigned int a[11];
	unsigned int j, l, o, sum;
	int num;

	o = va_arg(args, unsigned int);
	l = 1073741824; /* (8 ^ 10) */
	a[0] = o / l;
	for (j = 1; j < 11; j++)
	{
		l /= 8;
		a[j] = (o / l) % 8;
	}
	for (j = 0, sum = 0, num = 0; j < 11; j++)
	{
		sum += a[j];
		if (sum || j == 10)
		{
			_putchar('0' + a[j]);
			num++;
		}
	}
	return (num);
}
