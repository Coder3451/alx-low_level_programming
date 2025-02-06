# 0x1C-makefiles

## Description
This project introduces Makefiles, a very useful tool for automating the repetitive build tasks in C/C++ programming. It is life saving when working on projects with multiple source files, managing dependencies, and using variables to streamline compilation.

## Files
- **`main.c`**: Sample main program for testing.
- **`school.c`**: Implements helper functions.
- **`school.h`**: Header file containing function prototypes.
- **`Makefile`**: Automates compilation with defined rules.

## Usage
1. Compile the program:
	bash
	make

2. Run the executable:
	./school

3. Clean up compiled files:
	make clean

## Makefile Targets
- all: Compiles and links all files into the executable.
- clean: Deletes all object files.
- fclean: Deletes object files and the executable.
- re: Rebuilds the project from scratch.

## Author
- Segni Jabesa - [GitHub](https://github.com/Coder3451)
