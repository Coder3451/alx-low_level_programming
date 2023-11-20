# C - Structures and typedefHo

## Structure
A structure, also known as a struct, is a user-defined data type that allows you to combine group related variables together into a single unit.
This can make your code more organized and easier to read, especially when dealing with complex data.

### When to use structures

Representing complex data that has multiple attributes(it allows you to bundle these attributes together).
Instead of passing multiple arguments to a function, you can wrap them in a structure and pass the structure.
Working with arrays of structures, if you have multiple entities with the same attributes.

### How to use structures

1. Define the structure:

struct student {
	char name[40];
	int id;
	float gpa;
};

2. Declare an instance of the structure:

struct student s1;

3. Assign values to the structures's members:

strcpy(s1.name, "Alice");
s1.id = 123;
s1.gpa = 3.9;

4. Access the structure's members:

printf("Name: %s\n", s1.name);
printf("ID: %d\n", s1.id);
printf("GPA: %.2F\n", s1.gpa);

## typedef

The typedef keyword is used to create an alias for an existing data type.
This can make your code more readable and easier to write, especially when dealing with long or compelx data types.
Once you have creaated an alias for a data type, you can use it just like you would the original data type.

### How to use typedef

1. With basic data types: Create a new name for an existing data type.
2. With structures: Create an alias
3. With complex data types: Simplify complex data types. 
	typedef char* string; /* allows you to use string as an alias for ch					ar*. */

!Use it judiciously, as overuse can lead to code that is difficult to understand
