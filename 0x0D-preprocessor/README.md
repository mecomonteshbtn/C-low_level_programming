# **0x0D. C - Preprocessor**

## Read about:

*    Understanding C program Compilation Process
*    Object-like Macros
*    Macro Arguments
*    Pre Processor Directives in C
*    The C Preprocessor
*    Standard Predefined Macros
*    include guard
*    Common Predefined Macros

## General

*    What are macros and how to use them
*    What are the most common predefined macros
*    How to include guard your header files

## Requirements

*    Allowed editors: vi, vim, emacs
*    All your files will be compiled on Ubuntu 14.04 LTS
*    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
*    All your files should end with a new line
*    A README.md file, at the root of the folder of the project is mandatory
*    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
*    You are not allowed to use global variables
*    No more than 5 functions per file
*    The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
*    You are allowed to use _putchar
*    You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
*    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
*   The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
*    Don’t forget to push your header file
*    All your header files should be include guarded

##  0. Object-like Macro

Create a header file that defines a macro named SIZE as an abbreviation for the token 1024 and called 0-object_like_macro.h.

##  1. Pi

Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

## File name

Write a program that prints the name of the file it was compiled from, followed by a new line. You are allowed to use the standard library

##  3. Function-like macro

Write a function-like macro ABS(x) that computes the absolute value of a number x.

##  4. SUM mandatory

Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

##  6. Fun with the preprocessor #forfun

Write a program that can print Hello, Holberton, followed by a new line.

*    You are not allowed to use more than one line of code
*    You are not allowed to use more than 32 characters in the file 101-preprocessor_abuse.c, including the documentation of your functions and the preprocessor directives
*    You are not allowed to include other c files
*    You are not allowed to include other header files
*    Remember: your program should pass all Betty checks for style and documentation
*    You don’t have to use the -pedantic, -Wall, -Werror, -Wextra gcc flags
*    This program should be written in C and will be compiled with gcc
