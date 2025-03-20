#include "main.h"
#include <elf.h>

/**
 * main - Displays ELF header information.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 on success, otherwise exit with an error code.
 */
int main(int argc, char **argv)
{
	int i, fd, read_bytes;
	Elf64_Ehdr *header;
	
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		close(fd);
		exit(99);
	}

	read_bytes = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_bytes == -1 || read_bytes < (int)sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(header);
		close(fd);
		exit(98);
	}
	if (header->e_ident[EI_MAG0] != 0x7f || header->e_ident[EI_MAG1] != 'E' || header->e_ident[EI_MAG2] != 'L' || header->e_ident[EI_MAG3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Invalid ELF File\n");
		free(header);
		close(fd);
		exit(98);
	}

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	
	printf("Class:                             %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" :
			(header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "Invalid");
	
	printf("Data:                              %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
			(header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" : "Invalid");
	
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", header->e_type);
	printf("Entry point address:               0x%lx\n", header->e_entry);

	free(header);
	close(fd);
	return (0);
}
