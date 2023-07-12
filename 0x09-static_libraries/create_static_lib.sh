#!/bin/bash

# Compile the .c files into object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up the object files
rm *.o
