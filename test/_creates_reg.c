#include "main.h"

/**
 * _get_printer - checks for a registered printer for a given specifier
 * @specifier: the specifier to get a printer for
 *
 * Return: the printer found. if no valid printer exists,
 * a default NULL-based printer is returned
 */
printer _get_printer(const char *specifier)
{
	int j;
	static printer printers[] = {
		{"c", _print_char},
		{"s", _print_var},
		{"d", _print_decimal},
		{"i", _print_int},
		{"b", _print_binary},
		{"S", _print_var_nonprintable},
		{"r", _print_var_reverse},
		{"R", _print_rot13},
		{"u", _print_uint},
		{"o", _print_octal},
		{"x", _print_hex_lower},
		{"X", _print_hex_upper},
		{"p", _print_pointer},
		{NULL, NULL}
	};

	for (j = 0; printers[j].specifier != NULL; j++)
	{
		/**
		 * This current implementation assumes the specifier is
		 * one character long. This needs to be updated to
		 * support specifiers containing more chatacters
		 */
		if (*specifier == *(printers[j].specifier))
			break;
	}

	return (printers[j]);
}
