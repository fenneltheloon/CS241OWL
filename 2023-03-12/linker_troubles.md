# Linker Troubles

We want to use the `pow` function from the math library. How do we do this?

1. Make sure that any file that uses the function uses `#include <math.c>`
2. In your Makefile, include the `-lm` option at the *very end* of the compiler
command.
  - If you are compiling into intermediary .o object files, only use `-lm` in
  the rules where the object file that uses math.h are being compiled into an
  executable. Do not use `-lm` when compiling source code into an object file.
  - If you are compiling directly from source code into a binary, include `-lm`
  at the end.

Basically, `-lm` should only be used at the very last step of the compilation
process, however long that may be.
