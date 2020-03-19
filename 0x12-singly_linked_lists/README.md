# ** 0x12. C - Singly linked lists**

## Read or watch:

*    Linked Lists
*    Google
*    Youtube
*    Data Structures

## Learning Objectives

*    When and why using linked lists vs arrays
*    How to build and use linked lists

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
*    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
*    Don’t forget to push your header file
*    All your header files should be include guarded

Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

```