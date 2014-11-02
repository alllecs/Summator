#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int f1, f2, c, n;
	FILE *fp;
	int ferror(FILE *fp);

	if (argc != 2) {
		printf("Неправильно указан аргумент\n");
		return 3;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		perror("Ошибка при работе с файлом");
		return 2;
	}

	while (!feof(fp)) {
		n = fscanf(fp, "%d %d", &f1, &f2);
		if (n == EOF || ferror(fp)) {
			break;
		}
		else
		if (n != 2) {
			printf("Ошибка чтения файла\n");
			return 4;
		}

		c = f1 + f2;
		printf("%d\n", c);
	}

	fclose(fp);
	return 0;
}
