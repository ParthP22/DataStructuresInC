CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
LDLIBS =

main: main.c array_list.o array_list.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o main array_list.o main.c  $(LDLIBS)

make clean:
	rm -f *.o
	rm -f ./main.exe