#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int f1, f2, c;
	FILE *fp;

	if (argc > 2) {
		printf("Указано больше одного аргумента. В строке - %d\n", argc);
		return 3;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		perror("Ошибка при работе с файлом");
		return 2;
	}

	while (!feof(fp)) {
		fscanf(fp, "%d %d", &f1, &f2);
		if (fscanf(fp, "%d %d", &f1, &f2) != 2) {
			printf("Ошибка чтения файла\n");
			return 4;
		}

		c = f1 + f2;
		printf("%d\n", c);
	}

	fclose(fp);
	return 0;
}
