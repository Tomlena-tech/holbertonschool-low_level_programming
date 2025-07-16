#difndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...);    
#endif /* __VARIADIC_FUNCTIONS_H__ */