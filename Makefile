CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
LDLIBS = -lmingw32
OBJ = main.o array_list.o reallocate.o single_linked_list.o double_linked_list.o
HEADERS = array_list.h reallocate.h single_linked_list.h double_linked_list.o
TARGET = main.exe

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^  $(LDLIBS)
	rm -f $(OBJ)


make clean:
	rm -f %.exe
