list_init: main.o ../util/libutil.so
	gcc -g main.o ../util/libutil.so -o list_init
main.o: main.c
	gcc -g -c main.c -o main.o
clean:
	rm -f list_init main.o
