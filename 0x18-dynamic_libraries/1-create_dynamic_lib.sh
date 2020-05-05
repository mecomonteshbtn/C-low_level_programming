#!/bin/bash
gcc -fPIC -Wall -Wextra -Werror -pedantic *.c -shared -o liball.s
