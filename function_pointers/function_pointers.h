#ifndef FNC_PTR
#define FNC_PTR
#include <stdlib.h>
#include <stdio.h>
void print_name(char *name, void(*f)(char *));
#endif
