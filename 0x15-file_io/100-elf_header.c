#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}



void print_magic_number(unsigned char* e_ident) {
	int i;
    printf("Magic Number: ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

void print_file_class(unsigned char e_ident_class) {
    printf("File Class: ");
    if (e_ident_class == ELFCLASS32) {
        printf("32-bit\n");
    } else if (e_ident_class == ELFCLASS64) {
        printf("64-bit\n");
    } else {
        printf("Invalid\n");
    }
}

void print_data_encoding(unsigned char e_ident_data) {
    printf("Data Encoding: ");
    if (e_ident_data == ELFDATA2LSB) {
        printf("Little Endian\n");
    } else if (e_ident_data == ELFDATA2MSB) {
        printf("Big Endian\n");
    } else {
        printf("Invalid\n");
    }
}

/**
 *  * print_version - Prints the version of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF version.
 *    */
void print_version(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

void print_file_type(Elf64_Half e_type) {
    printf("File Type: ");
    switch (e_type) {
        case ET_NONE:
            printf("No file type\n");
            break;
        case ET_REL:
            printf("Relocatable file\n");
            break;
        case ET_EXEC:
            printf("Executable file\n");
            break;
        case ET_DYN:
            printf("Shared object file\n");
            break;
        case ET_CORE:
            printf("Core file\n");
            break;
        default:
            printf("Unknown (%#x)\n", e_type);
            break;
    }
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}
/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	int cl;
	cl = close(elf);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}


int main(int argc, char* argv[]) {
    const char* file_path = argv[1];
    FILE* elf_file = fopen(file_path, "rb");
    Elf64_Ehdr elf_header;
    if (argc != 2) {
        printf("Usage: %s <ELF file>\n", argv[0]);
        return 1;
    }

    if (!elf_file) {
        perror("Error opening file");
        return 1;
    }

    if (fread(&elf_header, sizeof(elf_header), 1, elf_file) != 1) {
        perror("Error reading ELF header");
        fclose(elf_file);
        return 1;
    }
   
	printf("ELF Header:\n");
	check_elf(elf_header.e_ident);
    print_magic_number(elf_header.e_ident);
    print_file_class(elf_header.e_ident[EI_CLASS]);
    print_data_encoding(elf_header.e_ident[EI_DATA]);
    print_file_type(elf_header.e_type);
	print_version(elf_header.e_ident);
	print_osabi(elf_header.e_ident);
	print_abi(elf_header.e_ident);
	print_entry(elf_header.e_entry, elf_header.e_ident);
    
    fclose(elf_file);
    return 0;
}
