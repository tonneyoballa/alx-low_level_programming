#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: nummber of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list xz;
    unsigned a;
    char *str;

    va_start(xz, n);

    for (a = 0; a < n; a++)
    {
        str = (va_arg(xz, char *));
        if (str != NULL)
        {
            printf("%s", str);
        }
    
        else
        {
        printf("(nil)");
        }

        if ((a != (n - 1)) && separator != NULL)
        printf("%s", separator);
    }
    printf("\n")
    va_end(xz);
}
