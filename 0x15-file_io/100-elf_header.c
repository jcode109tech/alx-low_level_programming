#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>

/**
 * print_error - print error message and exits program
 * @message: message error
 */

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - info of struct elf
 * @header: info
 */

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);

	printf("\n");

	printf("  Class:        %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:         %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement,
		   little endian" : "Unknown");
	printf("  Version:      %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:       %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:  %d\n", header->e_ident[EI_ABIVERSION]);

	printf("  Type:                             ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

	printf("  Entry point address:          0x%lx\n", header->e_entry);
}

/**
 * main - main program
 * @argc: no: of arguments
 * @argv: arguments
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error(strerror(errno));

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Unable to read ELF header");

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Not an ELF file");

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
