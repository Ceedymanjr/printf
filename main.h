#ifndef MAIN_H
#define MAIN_H
#include<stdlib.h>
#include<stdarg.h>
#include<limits.h>
#include<unistd.h>

int _putchar(char c);
int print_dg(long num, int out);
int c_case(va_list args);
int s_case(va_list args);
int i_case(va_list args);
int d_case(va_list args);
int (*choose(char str))(va_list args);
int printf(conts char *format, ...);

#endif