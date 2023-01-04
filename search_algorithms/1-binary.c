#include "search_algos.h"
void print_array(int *array, size_t l, size_t r)
{
    size_t i;
    for (i = l; i <= r; i++)
    {
        printf("%d", array[i]);
        if (i < r)
        {
            printf(", ");
        }
    }
    printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
    size_t l = 0, r = size - 1, m;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        printf("Searching in array: ");
        print_array(array, l, r);
        if (array[m] == value)
        {
            return m;
        }
        if (array[m] < value)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}