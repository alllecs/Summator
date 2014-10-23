#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int f1, f2, f3, f4, f5, f6;
	FILE *fp;

	fp = fopen(argv[1], "r");

	if (fp == NULL ) {
                perror("fopen");
		return 2;
	}
	fscanf(fp, "%d %d %d %d %d %d", &f1, &f2, &f3, &f4, &f5, &f6);

	fclose(fp);

	printf("%.2d\n", f1 + f2);
        printf("%.2d\n", f3 + f4);
        printf("%.2d\n", f5 + f6);

	return 0;
}
