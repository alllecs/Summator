#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i = 0;
	FILE *fp;
	char ch;
	float f1, f2;

	if (argc != 3)
	for (i = 1; i < argc; i++)

	fp = fopen(argv[i], "r");
	fscanf(fp, "%f %f", &f1, &f2);

	if (fp == NULL ) {
		perror("Ошибка открытия файла.\n");
		exit(EXIT_FAILURE);
	}
	fclose(fp);

	printf("В файле записано:%.2f\n", f1 + f2);

//	while ( (ch = fgetc(fp)) != EOF )
//	printf("%c", ch);

	return 0;
}
