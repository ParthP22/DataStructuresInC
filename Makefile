CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
LDLIBS = -lmingw32
OBJ = main.o array_list.o reallocate.o single_linked_list.o
HEADERS = array_list.h reallocate.h single_linked_list.h
TARGET = main.exe

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^  $(LDLIBS)


make clean:
	rm -f $(OBJ)
