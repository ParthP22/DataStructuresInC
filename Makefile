CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
LDLIBS =
OBJ = array_list.o reallocate.o
HEADERS = array_list.h reallocate.h

main: main.c $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o main $(OBJ) main.c  $(LDLIBS)

make clean:
	rm -f *.o
	rm -f ./main.exe