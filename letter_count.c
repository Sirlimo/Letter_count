#include <stdio.h>
#include <stdlib.h>
#include <err.h>

unsigned long letter_count(FILE* fd)
{
	char c;
	unsigned long cpt = 0;

	if (!fd)
		err(1, "Unable to read directory");
	while ((c = fgetc(fd)) != EOF)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			cpt += 1;
	}
	return cpt;
}

int main(int argc, char** argv)
{
	if (argc != 2)
		err(1, "Invalid Argument");
	FILE* fd = fopen(argv[1], "r");
	printf("This file contains %lu letter(s)\n", letter_count(fd));
	fclose(fd);
	return 0;
}
