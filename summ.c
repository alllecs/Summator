#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i = 0;
	FILE *fp;
	char ch;
	float f1, f2, f3, f4, f5, f6;

	if (argc != 3)
	for (i = 1; i < argc; i++)

	fp = fopen(argv[i], "r");
	fscanf(fp, "%f %f %f %f %f %f", &f1, &f2, &f3, &f4, &f5, &f6);

	if (fp == NULL ) {
		perror("Ошибка открытия файла.\n");
		exit(EXIT_FAILURE);
	}
	fclose(fp);

	printf("Сумма первых двух чисел:%.2f\n", f1 + f2);
        printf("Сумма вторых двух чисел:%.2f\n", f3 + f4);
        printf("Сумма третьих двух чисел:%.2f\n", f5 + f6);

	return 0;
}
