#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;

	if (argc != 2) {
		printf
		    ("Отсутствует или указано больше 1 аргумента\n");
		return 3;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		perror("Ошибка при работе с файлом");
		return 2;
	}

	while (!feof(fp)) {
		int f1, f2, n;

		n = fscanf(fp, "%d %d", &f1, &f2);
		if (n == EOF) {
			break;
		}
		if (n != 2 || ferror(fp)) {
			printf("Ошибка чтения файла\n");
			return 4;
		}

		printf("%d\n", f1 + f2);
	}

	fclose(fp);

	return 0;
}
