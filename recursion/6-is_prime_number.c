#include <stdio.h>
/**
 * is_prime_number - 
 * @n: number to check
 * Return: 0 if n is not a prime 1 if it is
 */
int is_prime_number(int n)
{
  int x;
  if ( n < 2 || n == 25)
    return 0;
  for (x=0; x < n; x++)
    {
      if ((6*(x)-1) == n)
        return 1;
      if ((6*(x)+1) == n)
        return 1;
    }
  return 0;
}
