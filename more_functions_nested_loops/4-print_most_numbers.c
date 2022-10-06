#include "main.h"
/**
 * print_most_numbers - print number 0 to 9 without 2 and 4
 * Return: none
 */
void print_most_numbers(void)
{
   int x;
    char c = '0';
    for (x = 0; x <= 9; x++)
    {
        if (c == '2' || c == '4')
        {
        }
        else
        {
          _putchar(c);
        }c++;

     } 
}   
