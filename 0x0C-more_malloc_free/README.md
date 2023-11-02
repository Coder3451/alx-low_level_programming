# More about Dynamic memory allocation

## exit()

It is a function used to terminate a program immediately from any part of the code.
It takes an integer argument which is returned to the operating system as the program's exit status.

## calloc()

It is a function that allocates memory and initializes all bytes in the allocated storage to zero.
It takes two arguments the number of elements to be allocated and the size of elements in bytes.

## realloc()

It is used to change the size of the memory block pointed to by a given pointer.
It takes two arguments: a pointer to the memory area and the new size in bytes.
If the new size is larger, the additional memory is not initialized.
If realloc() is unable to resize the memory block to the given size, it returns NULL.
It is good to always check if these functions return NULL, indicating that memory allocation failed.
