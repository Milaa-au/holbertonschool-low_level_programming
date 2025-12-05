#include <stdio.h>
#include <stdarg.h>

typedef void (*print_func)(va_list);

static void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

static void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

static void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

static void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

typedef struct form 
{
	char type;
	print_func func;
} form_t;

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *sep = "";

	form_t forms[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == forms[j].type)
			{
				printf("%s", sep);
				forms[j].func(args);
				sep = ", "; 
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
