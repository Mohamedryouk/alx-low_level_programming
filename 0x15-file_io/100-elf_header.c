int main(int argc, char *argv[]);
void printElfHeaderInfo(ElfHeader header);
#include "main.h"
/**
 * main- main function
 * @argc: argunments
 * @argv: var arguments
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int fd;
	ElfHeader header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (ERROR_INVALID_ELF);
	} fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (ERROR_INVALID_ELF);
	}
	if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		perror("Error reading ELF header");
		close(fd);
		return (ERROR_INVALID_ELF);
	}
	if (header.e_ident[EI_MAG0] != 0x7F || header.e_ident[EI_MAG1] != 'E' ||
	header.e_ident[EI_MAG2] != 'L' || header.e_ident[EI_MAG3] != 'F')
	{
		fprintf(stderr, "Not a valid ELF file\n");
		close(fd);
		return (ERROR_INVALID_ELF);
	} printf("ELF Header:\n");
	printElfHeaderInfo(header);
	close(fd);
	return (0);
}
/**
 * printElfHeaderInfo- prints header of elf
 * @header: constructor
 */
void printElfHeaderInfo(ElfHeader header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Unknown\n");
	}
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little-endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big-endian\n");
		break;
	default:
		printf("Unknown\n");
	}
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION])
		;
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
	case 0:
		printf("UNIX - System V\n");
		break;
	case 1:
		printf("UNIX - HP-UX\n");
		break;
	case 255:
		printf("Standalone App\n");
		break;
	default:
		printf("Unknown\n");
	}
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION])
		;
	printf("  Type:                              ");
	switch (header.e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
	}
	printf("  Entry point address:               0x%08x\n", header.e_entry);
}
