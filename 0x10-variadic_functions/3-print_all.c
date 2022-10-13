#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: string to be printed between numbers
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *sp = "";

	va_list ls;

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(ls, format);
	while (format[j])
	{
		switch (format[j])
		{
		case 'c':
			printf("%s%c", sp, va_arg(ls, int));
			break;
		case 'i':
			printf("%s%d", sp, va_arg(ls, int));
			break;
		case 'f':
			printf("%s%f", sp, va_arg(ls, double));
			break;
		case 's':
			str = va_arg(ls, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sp, str);
			break;
		default:
			j++;
			continue;
		}
		sp = ", ";
		j++;
	}
	va_end(ls);
	printf("\n");
}
