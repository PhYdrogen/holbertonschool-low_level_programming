#include "main.h"
/**
 * times_table - return the table to nine
 * Return: none
 */
void times_table(void)
{
    int x;
    int k;
    int ch = 0;
    int ch2 = ' ';
    int ch3 = ' ';
    int tmp;

    for (x = 0 ; x <= 9 ; x++)
    {  
        for (k = 0 ; k <= 9 ; k++)
        {
            ch = k * x;
            if ( ch >= 10)
            {
                tmp = ch;
                ch = ch % 10;
                ch2 = (tmp - ch) / 10;
                ch2 = ch2 + '0';
            }
            ch = ch + '0';
            putchar(ch3);
            putchar(ch2);
            putchar(ch);
            putchar(',');
            ch = ch - '0';
            ch++;
        }
        putchar('\n');
        ch = 0;
        ch2 = ' ';
    }
    
}
