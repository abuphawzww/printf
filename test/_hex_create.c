#include "main.h"

/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exponent: exponent of number
 *
 * Return: base ^ exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int j;
	unsigned long answer = base;

	for (j = 1; j < exponent; j++)
	{
		answer *= base;
	}
	return (answer);
}

/**
 * print_hex - prints an unsigned int in hexidecimal form
 * @n: unsigned int to print
 * @c: flag to determine case of printing (0 = lower, 1 = upper)
 *
 * Return: number of digits printed
 */
int print_hex(unsigned int m, unsigned int d)
{
	unsigned int a[8];
	unsigned int j, k, sum;
	char diff;
	int count;

	k = 268435456; /* (16 ^ 7) */
	if (d)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = m / k;
	for (j = 1; j < 8; j++)
	{
		k /= 16;
		a[j] = (m / k) % 16;
	}
	for (j = 0, sum = 0, count = 0; j < 8; j++)
	{
		sum += a[j];
		if (sum || j == 7)
		{
			if (a[j] < 10)
				_putchar('0' + a[j]);
			else
				_putchar('0' + diff + a[j]);
			count++;
		}
	}
	return (count);
}

/**
 * _print_hex_lower - takes an unsigned int and prints
 * it in lowercase hex notation
 * @args: arguments
 *
 * Return: number of digits printed
 */
int _print_hex_lower(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 0));
}

/**
 * _print_hex_upper - takes an unsigned int and prints it in
 * uppercase hex notation
 * @args: arguments
 *
 * Return: number of digits printed
 */
int _print_hex_upper(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 1));
}

/**
 * _print_pointer - prints an address
 * @args: arguments
 *
 * Return: number of characters to print
 */
int _print_pointer(va_list args)
{
	int count = 0;
	unsigned int a[16];
	unsigned int j, sum;
	unsigned long m, k;
	char *str = "(nil)";

	m = va_arg(args, unsigned long);
	if (m == 0)
	{
		for (j = 0; str[j]; j++)
		{
			_putchar(str[j]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	k = _pow(16, 15); /* 16 ^ 15 */
	a[0] = m / k;
	for (j = 1; j < 16; j++)
	{
		k /= 16;
		a[j] = (m / k) % 16;
	}
	for (j = 0, sum = 0; j < 16; j++)
	{
		sum += a[j];
		if (sum || j == 15)
		{
			if (a[j] < 10)
				_putchar('0' + a[j]);
			else
				_putchar('0' + ('a' - ':') + a[j]);
			count++;
		}
	}
	return (count);
}
