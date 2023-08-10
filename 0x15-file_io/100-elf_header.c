#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * print_elf_header_info -
 *
 *
 */

void print_error_and_exit(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

void print_elf_header_info(Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    
    printf("  Class:                             ");
    if (header->e_ident[EI_CLASS] == ELFCLASS32) {
        printf("ELF32\n");
    } else if (header->e_ident[EI_CLASS] == ELFCLASS64) {
        printf("ELF64\n");
    }
    
    printf("  Data:                              ");
    if (header->e_ident[EI_DATA] == ELFDATA2LSB) {
        printf("2's complement, little endian\n");
    } else if (header->e_ident[EI_DATA] == ELFDATA2MSB) {
        printf("2's complement, big endian\n");
    }
    
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %02x>\n", header->e_ident[EI_OSABI]);
            break;
    }
    
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    
    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    
    printf("  Entry point address:               0x%llx\n", (unsigned long long)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error_and_exit(98, "Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s", argv[1]);
    }

    Elf64_Ehdr header;
    ssize_t read_bytes = read(fd, &header, sizeof(header));
    if (read_bytes != sizeof(header)) {
        print_error_and_exit(98, "Error: Failed to read ELF header from %s", argv[1]);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error_and_exit(98, "Error: %s is not an ELF file", argv[1]);
    }

    print_elf_header_info(&header);

    if (close(fd) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d", fd);
    }

    return 0;
}

