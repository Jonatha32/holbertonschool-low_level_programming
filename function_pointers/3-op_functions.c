#include "3-calc.h"
/**
 * op_add - add
 * @a: parameter
 * @b: parameter
 * Return: a + b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - substract
 * @a: parameter
 * @b: parameter
 * Return: a - b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multi
 * @a: parameter
 * @b: parameter
 * Return: a * b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divide
 * @a: parameter
 * @b: parameter
 * Return: a / b
 */
int op_div(int a, int b)
{
if (b == 0)
{
return (100);
}
return (a / b);
}
/**
 * op_mod - modu
 * @a: parameter
 * @b: parameter
 * Return: a % b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
return (100);
}
return (a % b);
}
