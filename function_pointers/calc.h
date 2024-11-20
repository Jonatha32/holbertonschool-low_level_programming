#ifndef CAL_H
#define CAL_H

/**
 * struct op -  structure for defining operators
 * @op: parameter
 * @f: function
 * Description: structure used to operators
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
