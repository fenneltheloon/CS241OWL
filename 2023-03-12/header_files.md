# Header files

Header files contain:
- Function prototypes
- Guards (prevent multiple inclusion)
- Variables (global scope and externs)

## Fun error mesages that we encounter
- Undefined reference to "print_bits"
  - Did we #include the header file in the source code where it is being used  
  - Are all functions named correctly, with proper arguments and return types?

Potential fix #1: Include the header file in both the file in which the function
is defined as well as the file in which it is used.
Did not work.

Let's code a MWI together!

- Function definiteion is not allowed
  - Might have been a shell error, stay tuned