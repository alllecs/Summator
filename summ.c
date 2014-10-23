#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i = 0;
	FILE *fp;
	char ch;

	if (argc != 3)
	for (i = 1; i < argc; i++)

	fp = fopen(argv[i], "r");

	if (fp == NULL ) {
		perror("Ошибка открытия файла.\n");
		exit(EXIT_FAILURE);
	}
	printf("В файле записано:\n", argv[i]);

	while ( (ch = fgetc(fp)) != EOF )
	printf("%c", ch);

	fclose(fp);
	return 0;
}
