#include "main.h"
/**
 * _strchr - search c in a string s
 * @s: the string to be search in
 * @c: the char it will be look up for
 * Return: the a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
  int x, y, z;
  char lt[300];
  char *ltp = lt;
  
  for (x = 0; s[x] != '\0'; x++)
    {}
  /* x is my string length */
  for (y = 0; s[y] != c; y++)
    {}
  /* y is where i found my char*/
  for (z = 0; z < x; y++)
    {
      lt[z] = s[y];
      z++;
    }
  lt[z+1] = '\0';
  return (ltp);
}
