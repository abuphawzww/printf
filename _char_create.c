#include "main.h"

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
static int hex_print(char c)
{
	int num;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (num = 0; num < 2; num++)
	{
		if (d[num] >= 10)
			_putchar('0' + diff + d[num]);
		else
			_putchar('0' + d[num]);
	}
	return (num);
}

/**
 * _print_char - prints a character
 * @args: the arguments list
 *
 * Return: 1 (number of chars printed)
 */
int _print_char(va_list args)
{
	char ch = (char)va_arg(args, int);

	_putchar(ch);
	return (1);
}

/**
 * _print_str - prints a string
 * @args: the arguments list
 *
 * Return: number of chars printed
 */
int _print_str(va_list args)
{
	int num;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[num]; num++)
	{
		_putchar(str[num]);
	}
	return (num);
}
/**
 * _print_str_nonprintable - prints a string and nonprintable
 * character ascii values
 * @args: arguments list
 *
 * Return: number of chars printed
 */
int _print_str_nonprintable(va_list args)
{
	unsigned int j;
	int num = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[j]; j++)
	{
		if (str[j] < 32 || str[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			num += 2;
			num += hex_print(str[j]);
		}
		else
		{
			_putchar(str[j]);
			num++;
		}
	}
	return (num);
}
/**
 * _print_str_reverse - prints a string in reverse
 * @args: arguments list of the project
 *
 * Return: number of chars printed
 */
int _print_str_reverse(va_list args)
{
	char *str;
	int j, num = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = ")llun(";
	for (j = 0; str[j]; j++)
		;
	for (j -= 1; j >= 0; j--)
	{
		_putchar(str[j]);
		num++;
	}
	return (num);
}
