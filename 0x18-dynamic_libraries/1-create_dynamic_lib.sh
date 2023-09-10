#!/bin/bash

# Compile each .c file into a .o (object) file
for source_file in *.c; do
    gcc -c -Wall -fpic "$source_file"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm -f *.o

echo "Dynamic library liball.so created successfully."
