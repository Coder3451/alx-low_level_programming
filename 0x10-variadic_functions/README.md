# C - Variadic functions
Variadic functions are functions that accept an indefinite number of arguments.
They allow you to pass a different number of arguments each time you call the function.
They are declared with an ellipsis(...) in place of the last parameter.
Often used when the number of arguments or their types are not known in advance, such as printf() in C, which can take a variable number of arguments based on the format string.
### Usage
#include <stdarg.h>

void myVariadicFunction(int num_args, ...)
## Some macros(defined in <stdarg.h>)
Used to handle the variable arguments in a variadic funtion.

### va_list
It is used to hold the list of arguments.
#### Usage
va_list args;
### va_start
It is used to initialize the va_list variable to the beginning of the list.
#### Usage
va_start(args, num_args);
### va_arg
It is used to retrieve the next argument from the variable argument list.
#### Usage
total += va_arg(args, int);
### va_end
It is used to clean up the variable argument list.
#### Usage
va_end(args);
## const
It is used to tell the compiler that the variable is not changeable.
Its value cannot be altered throughout the program.
It is used to enforce immutability and improve code safety.
### Usage
To protect certain data from being changed.
When you have a value that should remain constant throughout the program.
#### Using with variables
When the variable is declared, it means that you cannot modify its value after initialization.
#### Using with function parameters
It allows you to indicate that the function will not modify the parameter's value.
#### Using with return types
It allows you to indicate that the returned value should not be modified

