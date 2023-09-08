#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

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


    fclose(elf_file);

   
    print_magic_number(elf_header.e_ident);
    print_file_class(elf_header.e_ident[EI_CLASS]);
    print_data_encoding(elf_header.e_ident[EI_DATA]);
    print_file_type(elf_header.e_type);
    

    return 0;
}
