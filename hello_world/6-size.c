#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
  int a;
  float b;
  char c;
  long int e;
  long long int f;
  
printf("Size of a char: %u byte(s)\n", sizeof(c));
printf("Size of a int: %u byte(s)\n", sizeof(a));
printf("Size of a float: %u byte(s)\n", sizeof(b));
printf("Size of a long int: %u byte(s)\n", sizeof(e));
printf("Size of a long long int: %u byte(s)\n", sizeof(f));
return (0);
}
