# C - Variadic functions

Each file in this directory holds code that illustrates an essential concept of programming, specific to the C programming language, what variadic functions are, how to use type: va_list and macros: va_start, va_arg, va_end, and how to use const type.

## REAQUIREMENTS:

> LANGUAGE: C

> OS: Ubuntu 20.04 LTS

> COMPILER: gcc

> STYLEGUIDELINE: Betty style (https://github.com/holbertonschool/Betty/wiki)

## DESCRIPTION OF WHAT EACH FILE SHOWS:

0. A function that returns the sum of all its parameters.If n == 0, return 0

1. A function that prints numbers, followed by a new line. 
   Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
   . where separator is the string to be printed between numbers
   .and n is the number of integers passed to the function
   .You are allowed to use printf
   .If separator is NULL, don’t print it
   .Print a new line at the end of your function

2. A function that prints strings, followed by a new line.
### .Prototype: void print_strings(const char *separator, const unsigned int n, ...);
   .where separator is the string to be printed between the strings
   .and n is the number of strings passed to the function
   .If separator is NULL, don’t print it
   .If one of the string is NULL, print (nil) instead
   .Print a new line at the end of your function

3. A function that prints anything.
### .Prototype: void print_all(const char * const format, ...);
   .where format is a list of types of arguments passed to the function
    c: char
    i: integer
    f: float
    s: char * (if the string is NULL, print (nil) instead
    any other char should be ignored
    Print a new line at the end of your function

## AUTHOR:
### MONEHIN FEYISARA

 Licensed

