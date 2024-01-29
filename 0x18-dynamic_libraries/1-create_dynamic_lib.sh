#!/bin/bash
gcc -o *.c -fpic && gcc *.o -shared liball.so
