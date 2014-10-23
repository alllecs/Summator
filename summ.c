#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int f1, f2, f3, f4, f5, f6;
	FILE *fp;

	if (argc < 2) {
		printf("\nНеправильно введен аргумент = %d\n", argc);
		return 3;
	}
	fp = fopen(argv[1], "r");

	if (fp == NULL ) {
                perror("error fopen");
		return 2;
	}
	fscanf(fp, "%d %d %d %d %d %d", &f1, &f2, &f3, &f4, &f5, &f6);

	fclose(fp);

	printf("%.d\n", f1 + f2);
        printf("%.d\n", f3 + f4);
        printf("%.d\n", f5 + f6);

	return 0;
}
