#include <stdio.h>
#include "main.h"

/**
 * is_prime_recursive - function
 * @n: parameter
 * @i: parameter
 * Return: :)
 */

int is_prime_recursive(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_recursive(n, i + 1));

}

/**
 * is_prime_number - function
 * @n: parameter
 * Return: ?
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_recursive(n, 2));
}
