#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int f1, f2, c;
	FILE *fp;

	if (argc > 2) {
		printf("\nНеправильно введен аргумент = %d\n", argc);
		return 3;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL ) {
		perror("error fopen");
		return 2;
	}

	while (!feof(fp)) {
		fscanf(fp,"%d %d", &f1, &f2);
		printf("%.d\n", c = f1 + f2);
	}

	fclose(fp);
	return 0;
}
