CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
LDLIBS =
OBJ = array_list.o reallocate.o single_linked_list.o
HEADERS = array_list.h reallocate.h single_linked_list.h

main: main.c $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o main $(OBJ) main.c  $(LDLIBS)

make clean:
	rm -f *.o
	rm -f ./main.exe