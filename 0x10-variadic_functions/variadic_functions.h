#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * struct format_printer - struct for format printer
 * @format: format to print
 * @print: function to print
 */
struct format_printer
{
	char format;
	void (*print)(va_list args);
};
#endif /* VARIADIC_FUNCTIONS_H */
