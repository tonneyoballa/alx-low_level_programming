#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: integer value
 * Description: computes the absolute valie of an integer
 * Return: 0
 */
int _abs(int a)
{
if (a > 0)
{
	a = +a;
}
else
{
	a = -a;
}
return (a);
}
