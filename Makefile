CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
LDLIBS = -lmingw32
OBJ = main.o array_list.o reallocate.o single_linked_list.o double_linked_list.o array_stack.o linked_list_stack.o array_queue.o linked_list_queue.o array_heap.o disjoint_set.o
HEADERS = array_list.h reallocate.h single_linked_list.h double_linked_list.h array_stack.h linked_list_stack.h array_queue.h linked_list_queue.h array_heap.h disjoint_set.h
TARGET = main.exe

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^  $(LDLIBS)
	rm -f $(OBJ)


make clean:
	rm -f %.exe
