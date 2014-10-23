all: summ
summ: summ.c
	gcc -I . -o summ -W -Wall summ.c
clean:
	rm -rf *.o summ
